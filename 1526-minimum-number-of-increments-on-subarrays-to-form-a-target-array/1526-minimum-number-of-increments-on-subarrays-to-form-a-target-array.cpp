class Solution {
public:
    int minNumberOperations(vector<int>& t) {
        int count=0;
        count+=t[0];
        for(int i=1;i<t.size();i++){
            count+=max(t[i]-t[i-1],0);
        }
        
        return count;
    }
};