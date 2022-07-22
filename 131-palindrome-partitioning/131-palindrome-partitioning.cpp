class Solution {
public:
    bool is_palin(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }return true;
    }
    
    void recursion(string s, int index,vector<string>&v, vector<vector<string>>&ans){
        if(index>=s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(is_palin(s.substr(index,i-index+1))){
                v.push_back(s.substr(index,i-index+1));
                recursion(s,i+1,v,ans);
                v.pop_back();
            }
        }
    }
      
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        int index=0;
        recursion(s,0,v,ans);
        return ans;
    }
};