class Solution {
public:
    
        int atmostKdistinct(vector<int>& nums, int k)
        {
            unordered_map<int,int>mp;
            int left=0,right=0,count(0);
            
            while(right<nums.size()){
                mp[nums[right]]++;
                
                while(mp.size()>k){
                    mp[nums[left]]--;
                    if(mp[nums[left]]==0){
                        mp.erase(nums[left]);
                    }
                    left++;
                }
                
                count+=right-left+1;
                right++;
            }
            return count;
        }
        int subarraysWithKDistinct(vector<int>& nums, int k) {
            return atmostKdistinct(nums,k)-atmostKdistinct(nums,k-1);
        }
    
    
    
    
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
        
//         for(int i=0;i<k;i++){
//             mp[nums[i]]++;
//         }
        
//         int count=0;
//         if(mp.size()==k){
//             count++;
//         }
        
//         for(int i=k;i<nums.size();i++){
//             // mp.erase(mp.begin());
//             mp[nums[i]]++;
            
//             if(mp.size()==k){
//                 count++;
//             }
//             mp.erase(mp.begin());
//         }
        
//         return count;
        
//     }
};