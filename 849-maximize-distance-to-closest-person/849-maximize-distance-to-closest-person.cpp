class Solution {
public:
    int max0s(vector<int>arr)
    {
        int count=0,ans=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count=0;
            }
            else{
                count++;
                ans=max(ans,count);
            }
        }
        return ans;
    }
    int maxDistToClosest(vector<int>& seats) {
        //maximum consecutive 0s
        int zeros=max0s(seats);
        
        if(zeros==seats.size()-1){
            if(seats[0]==1){
                return seats.size()-1;
            }
            else if(seats[seats.size()-1]==1){
                return seats.size()-1;
            }
        }
        
        int ans=(zeros+1)/2;
        
        
        int left_one=0,right_one=0;
        
        for(int i=0;i<seats.size();i++){
            if(seats[i]==1){
                left_one=i;
                break;
            }
        }
        for(int i=seats.size()-1;i>=0;i--){
            if(seats[i]==1){
                right_one=i;
                break;
            }
        }
        
        
        return max({ans,left_one,(int)seats.size()-right_one-1});
    }
};