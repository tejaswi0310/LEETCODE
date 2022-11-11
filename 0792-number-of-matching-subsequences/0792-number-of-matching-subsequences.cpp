class Solution {
public:
    bool is_subsequence(string s, string t){
        int i=0,j=0;
        int count=0;
        while(i<s.size() and j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                count++;
            }
            else{
                i++;
            }
        }
        return count==t.size();
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        
        unordered_map<string,int>mp;
        for(auto it:words){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(is_subsequence(s,it.first)){
                count+=it.second;
            }
        }return count;
    }
};