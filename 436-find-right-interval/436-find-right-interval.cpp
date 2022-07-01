class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int>mp;
        vector<int>v;
        
        for(int i=0;i<intervals.size();i++){
            mp[intervals[i][0]]=i;
        }
        
        for(auto it:intervals){
            auto ans=mp.lower_bound(it[1]);
            
            if(ans==mp.end()){
                v.push_back(-1);
            }
            else
                v.push_back(ans->second);
        }
        
        return v;
    }
};