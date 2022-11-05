class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int low=0,high=sqrt(c)+1;
        
        while(low<=high){
            long long m=low*low + high*high;
            if(m==c){
                return true;
            }
            else if(m>c){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};