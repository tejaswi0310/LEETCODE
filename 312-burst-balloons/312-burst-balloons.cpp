class Solution {
public:
    int dp[1001][1001];
    int solve(vector<int>&nums, int i, int j)
    {
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int mn=INT_MIN;
        for(int k=i;k<j;k++){
            int temp=solve(nums,i,k)+solve(nums,k+1,j)+nums[i-1]*nums[k]*nums[j];
            if(temp>mn){
                mn=temp;
            }
        }
        
        return dp[i][j]=mn;
    }
    int maxCoins(vector<int>& nums) {
        // to start indexing from 1 we need to push 1 in the front and the back
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        
        memset(dp,-1,sizeof(dp));
        
        int i=1,j=nums.size()-1;
        
        return solve(nums,i,j);
        
    }
};