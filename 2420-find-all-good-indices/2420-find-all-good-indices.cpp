class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
        int pref[n],suff[n];
        
        pref[0]=1,suff[n-1]=1;
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                pref[i]=pref[i-1]+1;
            }
            else{
                pref[i]=1;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                suff[i]=suff[i+1]+1;
            }
            else{
                suff[i]=1;
            }
        }
        
        vector<int>v;
        
        for(int i=k;i<n-k;i++){
            if(pref[i-1]>=k and suff[i+1]>=k){
                v.push_back(i);
            }
        }return v;
    }
};