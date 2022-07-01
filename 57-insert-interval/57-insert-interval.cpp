class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
        //threee cases will be there
        //if the current interval values are less then the given interval values
        //second condition is of merging
        //third condition is values are higher
        
        int i=0;
        
        while(i<intervals.size() and intervals[i][1]<newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        
        while(i<intervals.size() and intervals[i][0]<=newInterval[1]){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            
            i++;
        }
        
        res.push_back(newInterval);
        
        while(i<intervals.size() and intervals[i][0]>newInterval[1]){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};