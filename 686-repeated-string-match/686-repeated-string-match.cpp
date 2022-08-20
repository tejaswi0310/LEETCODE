class Solution {
public:
    int repeatedStringMatch(string s, string t) {
        string a=s;
        
        for(int i=0;i<t.size()/s.size()+2;i++){
            if(a.find(t)!=string::npos){
                return i+1;
            }
            a+=s;
        }
        return -1;
    }
};
// abcdabcd
// cdabcdab