class Solution {
public:
    vector<int>nums;
    void recursion(int ind,int num, int k, int len){
        if(len==0){
            nums.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++){
            if(abs(i-ind)==k){
                recursion(i,num*10+i,k,len-1);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++){
            recursion(i,i,k,n-1);
        }
        return nums;
    }
};