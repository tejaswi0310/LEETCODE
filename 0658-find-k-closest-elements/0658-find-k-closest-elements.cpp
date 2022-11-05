class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push({abs(x-arr[i]),arr[i]});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        vector<int>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(res.begin(),res.end());
        return res;
    }
};