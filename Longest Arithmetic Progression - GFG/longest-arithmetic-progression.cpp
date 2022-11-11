//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int arr[], int n) {
        if(n<=2){
            return n;
        }
        vector<unordered_map<int,int>>mp(n);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int diff=arr[i]-arr[j];
                
                if(mp[j].find(diff)!=mp[j].end()){
                    mp[i][diff]=mp[j][diff]+1;
                    
                }
                else{
                    mp[i][diff]=2;
                }
            }
        }
        
        int ans=0;
        
        for(auto it:mp){
            for(auto i:it){
                ans=max(ans,i.second);
            }
        }return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends