class Solution {
public:
    
    int gcd(int x,int y){
        while(y){
            x=x%y;
            swap(x,y);
        }
        return x;
    }
    
    int maxPoints(vector<vector<int>>& points) {
        
        int ans=0;
        
        for(int i=0;i<points.size();i++){
            unordered_map<string,int>mp;
            int dup=1;
            for(int j=i+1;j<points.size();j++){
                if(points[i][0]==points[j][0] and points[i][1]==points[j][1]){
                    dup++;
                }
                else{
                    int dx=points[i][0]-points[j][0];
                    int dy=points[i][1]-points[j][1];
                    
                    int g=gcd(dx,dy);
                    
                    mp[to_string(dx/g)+'_'+to_string(dy/g)]++;
                }
            }
            
            ans=max(ans,dup);
            
            for(auto it:mp){
                ans=max(ans,it.second+dup);
            }
        }
        
        return ans;
    }
};