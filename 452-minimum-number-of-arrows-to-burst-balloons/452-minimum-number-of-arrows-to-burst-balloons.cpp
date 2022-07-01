class Solution {
public:
    static bool comp(pair<int,int>p1, pair<int,int>p2){
        return p2.second>p1.second;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(), points.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
        
        int count=1;
        // 1 6
        // 2 8
        int ex=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=ex){
                continue;
            }
            else{
                count++;
               ex=points[i][1];
               
            }
        }
        return count;
    }
};