class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second){
                int freq=it.second;
                
                for(int i=0;i<k;i++){
                    if(mp[it.first+i]<freq){
                        return false;
                    }
                    else{
                        mp[it.first+i]-=freq;
                    }
                }
            }
        }
        
        return true;
    }
};