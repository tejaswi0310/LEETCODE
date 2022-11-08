class Solution {
public:
    int totalFruit(vector<int>&nums) {
        
        int i=0,j=0;
        unordered_map<int,int>mp;
        int ans=0;
        int res=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            
            if(mp.size()==2){
                ans=max(ans,j-i+1);
            }
            while(mp.size()>2){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
            res=max(res,ans);
        }
        if(mp.size()<2){
            return nums.size();
        }
        return res;
    }
};