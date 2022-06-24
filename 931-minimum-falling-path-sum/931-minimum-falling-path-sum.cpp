class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        int dp[n][m];
        
        for(int i=0;i<n;i++){
            dp[0][i]=mat[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j+1]})+mat[i][j];
                }
                else if(j==n-1){
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1]})+mat[i][j];
                }
                else{
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j+1],dp[i-1][j-1]})+mat[i][j];
                }
            }
        }
        
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            ans=min(ans,dp[n-1][i]);
        }
        
        return ans;
    }
};