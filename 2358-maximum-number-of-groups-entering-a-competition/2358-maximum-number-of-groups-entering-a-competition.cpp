class Solution {
public:
    int maximumGroups(vector<int>& nums) {
        // int count=1,n=nums.size();
        // int ans=1;
        // if(n<=2){
        //     return 1;
        // }
        // while(count<n){
        //     ans++;
        //     count=count+ans;
        // }
        // return ans;
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        long long int sum=0;
        long long int pref[n];
        pref[0]=nums[0];
        sum+=nums[0];
        
        
        
        for(int i=1;i<n;i++){
            sum+=nums[i];
            pref[i]=pref[i-1]+nums[i];
        }
        
        int count=1;
        for(int i=1;i<n-count;i+=count){
            if(sum<=pref[i]-pref[i-count]){
                break;
            }
            else{
                count++;
            }
        }
        
        return count;
    }
};