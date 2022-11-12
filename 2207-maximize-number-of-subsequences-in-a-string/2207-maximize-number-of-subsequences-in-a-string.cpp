class Solution {
public:
    
    long long int count_subsequence(string s, string t){
        long long int count=0;
        unordered_map<char,long long int>mp;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[1]){
                count+=mp[t[0]];
            }
            mp[s[i]]++;
        }
        return count;
    }
    long long maximumSubsequenceCount(string text, string p) {
        long long int count_a=0,count_b=0;
        string t=text,s=text;
        t=p[0]+text;
        s=text+p[1];
        
        count_a=count_subsequence(t, p);
        count_b=count_subsequence(s, p);
        
        return max(count_a, count_b);
    }
};