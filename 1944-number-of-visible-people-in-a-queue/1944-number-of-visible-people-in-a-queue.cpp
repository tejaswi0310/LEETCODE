class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        int n=h.size();
        vector<int>ans(n);
        
        stack<int>s;
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and s.top()<=h[i]){
                ans[i]++;
                s.pop();
            }
            
            if(!s.empty()){
                ans[i]++;
            }
            s.push(h[i]);
        }
        
        return ans;
    }
};