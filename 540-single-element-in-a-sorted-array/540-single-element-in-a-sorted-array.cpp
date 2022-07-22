class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
//         int ans=-1;
        
//         int low=0,high=nums.size()-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(arr[mid]!=arr[mid-1] or arr[mid]!=arr[mid+1]){
//                 return arr[mid];
//             }
//             else if(arr[mid])
//         }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }return ans;
    }
};