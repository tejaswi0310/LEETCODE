class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0){
            return tasks.size();
        }
        int count=0;
        // A 6 B 1 C 1 D 1 E 1 F 1 G 1
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        // 6 1 1 1 1 1 1
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        
        int ans=(mx-1)*(n+1);
        
        for(auto it:mp){
            if(it.second==mx){
                ans++;
            }
        }
        
        return max((int)tasks.size(),ans);
    }
};