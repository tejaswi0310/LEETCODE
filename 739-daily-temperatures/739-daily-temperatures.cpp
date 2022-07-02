class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
//         stack<int>s;
//         vector<int>v;
//         int count=0;
//         for(int i=0;i<t.size();i++){
//             int m=t[i];
            
//             while(!s.empty() and s.top()<m){
//                 s.pop();
//                 count++;
//             }
            
//             if(s.empty()){
//                 v.push_back(0);
//             }
//             else v.push_back(count);
//             // count=0;
//             s.push(m);
//         }
        
//         return v;
        
        stack<int>s;
        vector<int>v(t.size());
        
        for(int i=0;i<t.size();i++){
            while(!s.empty() and t[s.top()]<t[i]){
                v[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return v;
    }
};