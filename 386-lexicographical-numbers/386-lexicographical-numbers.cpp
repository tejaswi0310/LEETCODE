class Solution {
public:
    // void dfs(int n,vector<int>v,int index){
    //     if(index>n){
    //         return;
    //     }
    //     for(int i=)
    // }
    vector<int> lexicalOrder(int n) {
        vector<int>v;
//         for(int i=1;i<=9;i++){
//             v.push_back(i);
//             if(i*10<=n){
//                 int temp=0;
//                 while(i*10+temp<=n){
//                 v.push_back(i*10+temp);
//                            temp++;
//                 }
//             }
//         }
        
//         return v;
        int curr=1;
        
        for(int i=1;i<=n;i++){
            v.push_back(curr);
            curr*=10;
            while(curr>n){
                curr/=10;
                curr++;
                while(curr%10==0){
                    curr/=10;
                }
            }
        }return v;
    }
};