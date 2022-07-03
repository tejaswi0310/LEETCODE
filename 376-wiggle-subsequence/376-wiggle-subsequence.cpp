class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
	int n = size(nums), len = 1, prevDiff = 0, currDiff;
	for(int i = 1; i < n; i++){
		currDiff = nums[i] - nums[i - 1];
		if((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0))
			len++, prevDiff = currDiff;
	}
	return len;
}
    
//     int wiggleMaxLength(vector<int>& nums) {
//         int n=size(nums);
        
//         int curr_diff,prev_diff=0;
//         int count=1;
        
//         for(int i=1;i<n;i++){
//             curr_diff=nums[i]-nums[i-1];
//             if((curr_diff>0 and prev_diff<=0) or (curr_diff>0 and prev_diff>=0)){
                
//                 count++;
//                 prev_diff=curr_diff;
//             }
//         }return count;
//     }
};