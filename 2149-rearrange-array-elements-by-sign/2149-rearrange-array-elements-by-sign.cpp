class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>pos(nums.size()/2),neg(nums.size()/2);
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else if(nums[i]<0){
                neg.push_back(nums[i]);
            }
        }
        int n=nums.size();
        
        vector<int>res(n);
        
        int j=nums.size()/2,k=nums.size()/2;
        
        for(int i=0;i<nums.size()-1;i+=2){
            res[i]=pos[j++];
            res[i+1]=neg[k++];
        }
        return res;
    }
};