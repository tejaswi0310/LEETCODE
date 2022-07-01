class Solution {
public:
    
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
//         vector<vector<int>> arr(intervals);
        
//         sort(arr.begin(),arr.end());
        
//         vector<int>res;
        
//         for(int i=0;i<intervals.size();i++){
//             int ans=binary_search(arr.begin(),arr.end(),intervals[i][0]);//-arr.begin();
//             res.push_back(ans);
//         }
        
//         return res;
        
        map<int,int>mp;
        vector<int>res;
        
        for(int i=0;i<intervals.size();i++){
            mp[intervals[i][0]]=i;
        }
        
        for(auto it:intervals){
            auto ans=mp.lower_bound(it[1]);
            if(ans==mp.end()){
                res.push_back(-1);
            }
            else{
                res.push_back(ans->second);
            }
        }
        return res;
        
    }
};