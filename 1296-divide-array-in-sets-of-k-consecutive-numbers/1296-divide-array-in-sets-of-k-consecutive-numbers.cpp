class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        // int 
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second){
                int freq=it->second;
                
                for(int i=0;i<k;i++){
                    if(mp[it->first+i]<freq){
                        return false;
                    }
                    else{
                        mp[it->first+i]-=freq;
                    }
                }
            }
        }
        
        return true;
    }
};