class Solution {
public:
    int max_subarray_sum(vector<int>nums){
        int sum=nums[0],curr=nums[0];
        
        for(int i=1;i<nums.size();i++){
            curr=max(curr+nums[i],nums[i]);
            sum=max(sum,curr);
        }return sum;
    }
    int min_subarray_sum(vector<int>nums){
        int sum=nums[0],curr=nums[0];
        
        for(int i=1;i<nums.size();i++){
            curr=min(curr+nums[i],nums[i]);
            sum=min(sum,curr);
        }return sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        int ans1=max_subarray_sum(nums);
        int ans2=sum-min_subarray_sum(nums);
        
        return ans1>0?max(ans1,ans2):ans1;
    }
};