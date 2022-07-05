class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
        long long int shifts=0;
        
        for(int i=shift.size()-1;i>=0;i--){
            s[i]=(s[i]-'a' +(shifts+shift[i])%26)%26+'a';
            
            shifts+=shift[i];
        }
        
        return s;
    }
};