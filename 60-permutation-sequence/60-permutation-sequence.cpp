class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        
        int count=0;
        do{
            if(count>=k-1){
                break;
            }
            count++;
        
        }while(next_permutation(s.begin(),s.end()));
        
        return s;
    }
};