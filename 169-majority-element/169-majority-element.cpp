class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0,votes=0;
        
        for(int i=0;i<nums.size();i++){
            if(votes==0){
                cand=nums[i];
                votes++;
            }
            else if(nums[i]==cand){
                votes++;
            }
            else{
                votes--;
            }
        }
        
        return cand;
    }
};