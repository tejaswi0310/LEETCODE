class Solution {
public:
    vector<int>nums;
    Solution(vector<int>& nums) {
        this->nums=nums;
    }
    
    vector<int> reset() {
        return nums;
    }
    
    vector<int> shuffle() {
        vector<int>result(nums);
        
        for(int i=0;i<result.size();i++){
            // int rand=random.rand
            int pos=rand() %(result.size()-i);
            
            swap(result[pos+i],result[i]);
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */