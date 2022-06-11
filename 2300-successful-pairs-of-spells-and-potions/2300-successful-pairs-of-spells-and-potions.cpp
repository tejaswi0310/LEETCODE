class Solution {
public:
    int counts(int x,vector<int>&nums,long long int n)
    {
        int count=0;
        int low=0,high=nums.size()-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((long long int)nums[mid]*x>=n){
                count=nums.size()-mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }return count;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        
        int count=0;
        vector<int>res;
        for(int i=0;i<spells.size();i++)
        {
            count=counts(spells[i],potions,success);
            res.push_back(count);
            count=0;
        }
        
        return res;
    }
};