// #define MAX 100001;

class Solution {
public:

    int earliestFullBloom(vector<int>& plant, vector<int>& grow) {
        vector<pair<int,int>>v;
        
        for(int i=0;i<plant.size();i++){
            v.push_back({grow[i],plant[i]});
        }
        int n=v.size();
        sort(v.begin(),v.end(),greater<pair<int,int>>());

        int ans=INT_MIN;
        
        int prev_bloom_time=0;
        
        
        for(int i=0;i<v.size();i++)
        {
            int grow_t=v[i].second;
            int plant_t=v[i].first;
            
            prev_bloom_time+=grow_t;
            
            int curr_max_time=prev_bloom_time+plant_t+1;
            
            ans=max(ans,curr_max_time);
        }
        
        return ans-1;
    }
};