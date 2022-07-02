class Solution {
public:
    
    
    int findMinDifference(vector<string>& time) {
        vector<int>v;
        
        for(auto it:time){
            int c=it[0]-'0';
            int d=it[1]-'0';
            int a=it[3]-'0';
            int b=it[4]-'0';
            
            int h=c*10+d;
            
            // h=min(h,24-h);
            int m=a*10+b;
            v.push_back(h*60 + m);
            
        }
        for(auto it:v){
            cout<<it<<' ';
        }
        sort(v.begin(),v.end());
        
        int ans=INT_MAX;
        
        for(int i=1;i<v.size();i++){
            ans=min(ans,v[i]-v[i-1]);
        }
        int n=v.size();
        //first and last case needs to be handled properly that's why i was getting the error added 60*24 otherwise answer minus me aa jayega
        ans=min(ans,v[0]-v[n-1]+60*24);
        
        return ans;
    }
};