class Solution {
public:
//     ++sVec[c1-'0']; ++gVec[c2-'0']; is used to count digits' (0~9) number which are not paired
    // . bCnt += min(sVec[i], gVec[i]); for example, sVec[1] =2, gVec[1] =3, means there are 2 '1' in secret and 3 '1' in guess can not find paired one, then at least there are 2 '1' is in the wrong place.


    string getHint(string secret, string guess) {
        int count1=0;
        vector<int>first(10,0);
        vector<int>second(10,0);
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                count1++;
            }
            else{
                first[secret[i]-'0']++;
                second[guess[i]-'0']++;
            }
        }
        string ans="";
        ans+=to_string(count1);
        ans+='A';
        
        int count2=0;
        for(int i=0;i<first.size();i++){
            count2+=min(first[i],second[i]);
        }
        ans+=to_string(count2);
        ans+='B';
        
        return ans;
    }
};