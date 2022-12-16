//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool partition(int nums[],int n,int sum,vector<vector<int>>&dp){
        if(n==0 and sum!=0){
            return false;
        }
        if(sum==0){
            return true;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        
        if(nums[n-1]>sum){
            return partition(nums,n-1,sum,dp);
        }
        
        return dp[n][sum]=partition(nums,n-1,sum,dp)||partition(nums,n-1,sum-nums[n-1],dp);
    }
    int equalPartition(int n, int nums[])
    {
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum&1){
            return false;
        }
        sum/=2;
        vector<vector<int>>dp(n +1,vector<int>(sum+1,-1));
        
        return partition(nums,n ,sum,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends