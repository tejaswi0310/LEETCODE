//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int mx=0,mn=INT_MAX;
                for(auto x:freq){
                    mx=max(mx,x);
                    if(x>=1){
                        mn=min(mn,x);
                    }
                }
                
                sum+=(mx-mn);
            }
        }return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends