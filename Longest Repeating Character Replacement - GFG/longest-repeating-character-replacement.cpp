//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
        // longest window of size 1
        unordered_map<char,int>mp;
        int i=0,j=0;
        
        int ans=0;
        int ok=INT_MIN;
        while(j<s.size()){
            mp[s[j]]++;
            
            ok=max(ok, mp[s[j]]);
            
            if(j-i+1-ok>k){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends