class Solution {
public:
    int maxArea(int ho, int w, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        
        int mx_h=0,mx_v=0;
        mx_v=max(v[0],w-v[v.size()-1]);
        mx_h=max(ho-h[h.size()-1],h[0]);
        for(int i=1;i<h.size();i++){
            mx_h=max(mx_h,h[i]-h[i-1]);
        }
        
    
        for(int i=1;i<v.size();i++){
            mx_v=max(mx_v,v[i]-v[i-1]);
        }
        
        
//         if(h.size()==1){
            
//         }
//         if(v.size()==1){
            
//         }
//         if(h.size()==1 and v.size()==1){
//             return h[0]*v[0];
//         }
        return (int)((long)mx_v*mx_h%1000000007);
    }
};