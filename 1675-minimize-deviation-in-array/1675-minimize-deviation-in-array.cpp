class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        int mn=INT_MAX;
        
        int mx=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                nums[i]*=2;
            }
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        
        int ans=mx-mn;
        
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        while(pq.top()%2==0){
            int q=pq.top();
            pq.pop();
            
            ans=min(ans,q-mn);
            
            q/=2;
            
            mn=min(mn,q);
            pq.push(q);
        }
        
        ans=min(ans,pq.top()-mn);
        
        return ans;
    }
};