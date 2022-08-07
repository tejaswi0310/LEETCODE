class Solution {
public:
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