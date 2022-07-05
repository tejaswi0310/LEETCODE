class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
         unordered_set<int>s;
         for(int i=0;i<n;i++){
             s.insert(arr[i]);
         }
          
         for(int i=0;i<n;i++){
             if(s.find(arr[i]-1)==s.end()){
                 int count=1;
                 
                 while(s.find(arr[i]+count)!=s.end()){
                     count++;
                 }
                 ans=max(ans,count);
             }
         }
         return ans;
    }
};