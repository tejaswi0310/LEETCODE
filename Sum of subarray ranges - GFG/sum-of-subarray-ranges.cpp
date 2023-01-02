//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long subarrayRanges(int n, vector<int> &arr) {
        long long sum=0;
        
        for(int i=0;i<n-1;i++){
            int mn=arr[i];

            int mx=arr[i];
            for(int j=i+1;j<n;j++){
                mx=max(mx,arr[j]);
                mn=min(mn,arr[j]);
                sum+=(mx-mn);
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.subarrayRanges(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends