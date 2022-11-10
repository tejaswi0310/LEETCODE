class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        //if there is any element where nums[i+2]<nums[i] it means there is a more global inversion
        //all local inversions are also global
        int mx=nums[0];
        for(int i=0;i<nums.size()-2;i++){
            mx=max(mx,nums[i]);
            if(mx>nums[i+2]){
                return false;
            }
        }return true;
    }
};