class Solution {
public:
    
    long long taskSchedulerII(vector<int>& a, int space) {
//         unordered_map<int,int>mp;
        
//         int count=0;
        
//         for(int i=0;i<tasks.size();i++){
//             if(mp.find(tasks[i])!=mp.end()){
//                 int index=mp[tasks[i]];
               
//                 if(count-index<=space){
                    
//                     long long req=space-count-mp[tasks[i]]+1;
//                     count+=req;
//                     mp[tasks[i]]=count;
                    
//                 }
//                 else{
//                     count++;
//                     mp[tasks[i]]=count;
//                 }
                
//             }
//             else{
//                 count++;
//                 mp[tasks[i]]=count;
//             }
//         }
        
//         return count;
        long long timer  = 0;
        map<long long , long long>lastTime;
        for(auto task : a)
        {
            timer++;
            if(lastTime.find(task)==lastTime.end())
            {
                lastTime[task] = timer;
            }
            else
            {
		    // if we already passed "space" days then no worries
                if( (timer - lastTime[task]) > space)
                {
                    lastTime[task] = timer;
                }
                else
                {
			 // find required days to wait
                    long long reqDays = space - (timer-lastTime[task]) +1;
                    
                    timer += reqDays;
                    
                    lastTime[task] = timer;
                }
            }
        }
        return timer;
//         long long n=t.size();
//         map<long long,long long>mp;
//         long long ans=n;
//         vector<long long>dp(n);
//         long long curr=0;
        
        
//         for(int i=0;i<n;i++){
//             if(mp.find(t[i])==mp.end()){
//                 mp[t[i]]=i;
//                 curr++;
//                 dp[i]=curr;
//             }
//             else{
//                 curr++;
                
//                 long long time=curr-dp[mp[t[i]]]-1;
                
//                 long long req=max(0LL,space-time);
//                 curr+=req;
                
//                 dp[i]=curr;
//                 mp[t[i]]=i;
//             }
//         }
//         return dp[n-1];
    }
};