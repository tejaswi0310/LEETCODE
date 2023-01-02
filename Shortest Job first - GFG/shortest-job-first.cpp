//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
  
    int solve(vector<int>& bt) {
        sort(bt.begin(),bt.end());
        int sum=0;
        int wt=0;
        
        for(int i=0;i<bt.size();i++){
            sum+=bt[i];
            wt+=sum-bt[i];
        }return wt/bt.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        int ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends