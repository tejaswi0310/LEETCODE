class Solution {
public:
    string reorganizeString(string str) {
        unordered_map<char,int>mp;
        for(auto c:str){
            mp[c]++;
        }
        int mx=INT_MIN;
        char c_mx;
        
        for(auto it:mp){
            if(it.second>mx){
                mx=it.second;
                c_mx=it.first;
            }
        }
        int n=str.size();
        
        if(mx>(n+1)/2){
            return "";
        }
        
        string res=str;
        
        int i=0;
        while(mp[c_mx]){
            res[i]=c_mx;
            mp[c_mx]--;
            i+=2;
        }
        
        for(auto it:mp){
            while(it.second>0){
                if(i>=n){
                    i=1;//start again from start
                }
                
                res[i]=it.first;
                it.second=it.second-1;
                i+=2;
            }
        }
        
        return res;
    }
};