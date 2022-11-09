class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int curr=0;
            for(int j=i;j<nums.size();j++){
                curr=__gcd(curr,nums[j]);
                if(curr==k){
                    ans++;
                }
            }
            }
        return ans;
    }
};