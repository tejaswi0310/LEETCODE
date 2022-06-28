class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count=0;
        
        long long int start=0;
        
        int i=0;
        
        while(start<n){
            if(i<nums.size() and nums[i]<=start+1){
                start+=nums[i];
                i++;
            }
            else{
                //we need to add a number
                count++;
                start+=start+1;
            }
        }
        return count;
    }
};