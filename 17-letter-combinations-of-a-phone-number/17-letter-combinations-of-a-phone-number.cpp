class Solution {
public:
    vector<string>pad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void recursion(int index,string &digits, vector<string>&res, string curr){
        if(index==digits.size()){
            res.push_back(curr);
            return;
        }
        
        for(auto it:pad[digits[index]-'0']){
            recursion(index+1,digits,res,curr+it);
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        vector<string>ans;
        recursion(0,digits,ans,"");
        return ans;
    }
};

