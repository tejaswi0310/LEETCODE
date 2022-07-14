class Solution {
public:
    string convert(string s, int n) {
        vector<string>v(n,"");
        
        int i=0;
        
        while(i<s.size()){
            for(int j=0;j<n and i<s.size();j++){
                v[j].push_back(s[i++]);
            }
            for(int j=n-2;j>=1 and i<s.size();j--){
                v[j].push_back(s[i++]);
            }
        }
        
        string ans="";
        
        for(string it:v){
            ans+=it;
        }
        
        return ans;
    }
};