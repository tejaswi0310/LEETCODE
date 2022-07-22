class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                mx=max(mx,temp);
                temp=0;
            }
            else{
                temp++;
            }
        }
        if(temp!=0){//because if we don't encounter 0 then
            mx=max(mx,temp);
        }
        return mx;
    }
};