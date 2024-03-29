class Solution {
public:
    
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            if(sum==0){
                ans=max(ans,i+1);
            }
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return ans;
    }
};