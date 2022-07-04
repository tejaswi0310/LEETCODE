class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
//         int n=arr.size();
//         int mx[n];
//         // memset(mx,INT_MIN,sizeof(mx));
//         mx[0]=arr[0];
//         for(int i=1;i<n;i++){
//             mx[i]=max(arr[i],arr[i-1]);
//         }
        
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(mx[i]==i){
//                 count++;
//             }
//         }
//         return count;
        
        int count=0;
        int mx=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            mx=max(mx,arr[i]);
            if(mx==i){
                count++;
            }
        }
        return count;
    }
};