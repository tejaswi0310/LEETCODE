class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        vector<int>dp;
        dp=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            int first_min=INT_MAX,second_min=INT_MAX,first_min_index;
            
            for(int j=0;j<m;j++){
                if(first_min>dp[j]){
                    first_min=dp[j];
                    first_min_index=j;
                }
            }
            
            for(int j=0;j<m;j++){
                if(second_min>dp[j] and j!=first_min_index){
                    second_min=dp[j];
                }
            }
            
            for(int j=0;j<m;j++){
                if(j==first_min_index){//agar first min index le chuke hain ho to second minimum lene parega kyunki adjacent to nahi le sakte hain na
                    dp[j]=second_min+arr[i][j];
                }
                else{
                    dp[j]=first_min+arr[i][j];
                }
            }
        }
        
        return *min_element(dp.begin(),dp.end());
    }
};