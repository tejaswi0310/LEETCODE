class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                int k=st.top();
                st.pop();
                reverse(s.begin()+k+1,s.begin()+i);
            }
        }
        string res="";
        for(auto it:s){
            if(it!='(' and it!=')'){
                res+=it;
            }
        }return res;
    }
};