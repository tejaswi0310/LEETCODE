class Solution {
public:
    int res=0;
    int vis[16]={};
    int dfs(int n, int ind){
        if(ind>n){
            return res++;
        }
        for(int i=1;i<=n;i++){
            if(!vis[i] and (i%ind==0 or ind%i==0)){
                vis[i]=true;
                dfs(n,ind+1);
                vis[i]=false;
            }
        }return res;
    }
    int countArrangement(int n) {
        if(n<4){
            return n;
        }
        return dfs(n,1);
    }
};