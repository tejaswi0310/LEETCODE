class Solution {
public:
    //it is giving tle
    
    
//     int dp[1000+1][1001];
        
//     int sum_of(string &s, int index){
//         int sum=0;
//         for(int i=index;i<s.size();i++){
//             sum+=int(s[i]);
//         }return sum;
//     }
//     int minimumSum(string s1, string s2, int i, int j) {
//         int n=s1.size(),m=s2.size();
        
//         if(i==n or j==m){
//             if(i==n and j==m){
//                 return 0;
//             }
//             if(i==n){
//                 return sum_of(s2,j);
//             }
//             else{
//                 return sum_of(s1,i);
//             }
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         int sum=0;
//         if(s1[i]==s2[j]){
//             sum= minimumSum(s1,s2,i+1,j+1);
//         }
//         else{
//             sum=min(minimumSum(s1,s2,i+1,j)+int(s1[i]), minimumSum(s1,s2,i,j+1)+int(s2[j]));
//         }
        
//         dp[i][j]=sum;
//         return  sum;
//     }
//     int minimumDeleteSum(string s1, string s2) {
//         memset(dp,-1,sizeof(dp));
        
//         return minimumSum(s1,s2,0,0);
//     }
// };





vector<vector<int>> dp; // we will store all our answers here and then get values for all future references
    
    int dead_end_sum(string &s , int i) // one of the string id empty , so all ASCII sums from ith character till end of string
    {
        int sum = 0;
        for( ; i<s.length() ; i++)
            sum+=int(s[i]);
        return sum;
    }
    
    int sub(string &a, string &b, int i, int j) // sub problem
    {
        int n = a.length();
        int m = b.length();
        int sum = 0;
        if(i==n || j==m)
        {
            if(i==n and j==m)   return 0;
            return (i==n) ? dead_end_sum(b,j) : dead_end_sum(a,i);
        }
        
        if(dp[i][j] != -1)            return dp[i][j];      // we know the answer so no need to recompute , reture it as it is.
    
        if(a[i] == b[j])
            sum = sub(a,b,i+1,j+1);
        else
        {
            sum = min({ sub(a,b,i+1,j) + int(a[i]) ,                // option  1
                        sub(a,b,i,j+1) + int(b[j])});              // option 2
        }      
        dp[i][j] = sum;     // we store our answer at each step
        return sum;
    }
    int minimumDeleteSum(string a, string b) {
        
        // making of DP matrix to store result and initilizing it to -1
        dp = vector<vector<int>>(a.length()+1, vector<int>(b.length()+1 , -1));
        return sub(a,b,0,0);
        
        return 0;
    }
};