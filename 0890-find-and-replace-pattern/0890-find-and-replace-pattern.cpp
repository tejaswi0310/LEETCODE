class Solution {
public:
    string pattern(string s){
        unordered_map<char,char>mp;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])==0){
                mp[s[i]]=char(count++);
            }
        }
        for(int i=0;i<s.size();i++){
            s[i]=mp[s[i]];
        }return s;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        vector<string>v;
        
        for(int i=0;i<words.size();i++){
            if(pattern(pat)==pattern(words[i])){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};