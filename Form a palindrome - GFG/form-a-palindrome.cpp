//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int lcs(string &a, string &b, int idx1, int idx2,int n,vector<vector<int>> &dp){

        if(idx1==n || idx2==n){

            return 0;

        }

        if(dp[idx1][idx2]!=-1){

            return dp[idx1][idx2];

        }

        int include = 0;

        if(a[idx1]==b[idx2]){

            include=1+lcs(a,b,idx1+1,idx2+1,n,dp);

        }

        int exclude = max(lcs(a,b,idx1+1,idx2,n,dp),lcs(a,b,idx1,idx2+1,n,dp));

        return dp[idx1][idx2] = max(include,exclude);

    }

    int countMin(string str){
    
        string a ="";
    
        for(int i=str.size()-1;i>=0;i--){
    
            a+=str[i];
    
        }
    
        int n=str.size();
    
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    
            int common = lcs(str,a,0,0,n,dp);
    
            return n-common;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends