//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
        int open=0,close=0;
        int ans=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(open==close){
                ans=max(ans,open+close);
            }
            if(close>open){
                close=0;
                open=0;
            }
        }
        open=0,close=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                close++;
            }
            else{
                open++;
            }
            if(open==close){
                ans=max(ans,open+close);
            }
            if(open>close){
                open=0,close=0;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends