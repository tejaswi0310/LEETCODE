class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        int index=-1;
        for(int i=s.size()-1;i>=1;i--){
            if(s[i]<s[i-1]){
                index=i;
                s[i-1]=s[i-1]-1;
            }
        }
        for(int i=index;i<s.size();i++){
            s[i]='9';
        }
        return stoll(s);
    }
};