class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x || y){
            count+=(x%2 != y%2);
            x>>=1;
            y>>=1;
        }
        return count;
    }
};