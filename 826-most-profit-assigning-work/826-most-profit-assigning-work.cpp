class Solution {
public:
    
    
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;
        for(int i=0;i<diff.size();i++){
            v.push_back({diff[i],profit[i]});
        }
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        
        int count=0;
        
//         for(int i=0;i<worker.size();i++){
//             int j=lower_bound(v.begin(),v.end(),worker[i])-v.begin();
                
//             count+=v[j].second;
//         }
        int j=0;
        int best=0;
        for(int i=0;i<worker.size();i++){
            while(j<profit.size() and worker[i]>=v[j].first){
                best=max(best,v[j].second);
                j++;
            }
            count+=best;
        }
        
        return count;
    }
};