class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans=0;
        int start=-1,end=-1;
        int mx=INT_MIN,mn=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[n-i-1]);
            
            if(mx>nums[i]){
                end=i;
            }
            if(mn<nums[n-i-1]){
                start=n-i-1;
            }
        }
        
        if(start==-1 or end==-1){
            return 0;
        }
        return end-start+1;
    }
};