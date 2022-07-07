class Solution {
public:
    bool can_eat(vector<int>&piles,int h,long long  k)
    {
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=k){
                count++;
            }
            else{
                if(piles[i]%k==0){
                    count+=piles[i]/k;
                }
                else{
                    count+=piles[i]/k+1;
                }
            }
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        int ans=0;
        
        long long  low=1,high=sum;
        
        while(low<=high){
            long long  mid=(low+high)/2;
            
            if(can_eat(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};