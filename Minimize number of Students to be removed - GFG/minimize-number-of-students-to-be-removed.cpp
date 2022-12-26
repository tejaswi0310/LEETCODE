//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int lengthOfLIS(int nums[], int n) {
        vector<int> sub;
        for (int i=0;i<n;i++) {
            if (sub.empty() || sub[sub.size() - 1] < nums[i]) {
                sub.push_back(nums[i]);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), nums[i]); // Find the index of the first element >= x
                *it = nums[i]; // Replace that number with x
            }
        }
        return sub.size();
    }
    int removeStudents(int arr[], int n) {
        // lis nikal ke n se minus kar denge
        // n-lis
        
        return n-lengthOfLIS(arr , n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends