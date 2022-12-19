//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        
        stack<char>st;
        stack<string>txt;
        
        string ans="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string temp="";
                string num="";
                
                while(!st.empty() and st.top()!='['){
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                
                while(!st.empty() and isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                int k=stoi(num);
                while(k--){
                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
            }
        }
        
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends