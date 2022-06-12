class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int count=0;
        
        int j=0;
        
        long long int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            while(sum*(i-j+1)>=k){
                sum-=nums[j++];
            }
            count+=(i-j+1);
        }
        
        return count;
    }
};