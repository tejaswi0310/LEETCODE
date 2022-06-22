class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0];
        }
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        int count=0;
        while(count!=k-1){
            pq.pop();
            count++;
        }
        return pq.top();
    }
};