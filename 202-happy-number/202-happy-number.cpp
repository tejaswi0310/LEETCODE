class Solution {
public:
    int digitSquareSum(int n)
    {
        int res=0;
        while (n)
        {
            int t = n % 10;
            res += t*t;
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n)
    {
        int i1=n, i2=digitSquareSum(n);
        
        while ( i2 != i1)
        {
            i1 = digitSquareSum(i1);
            i2 = digitSquareSum(digitSquareSum(i2));
        }
        
        return i1==1;
    }
};