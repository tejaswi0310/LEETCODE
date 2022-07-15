class Solution {
public:
    vector<vector<int>>ans;
    
    void backtrack(int index,int k,int n,vector<int>&curr){
        if(curr.size()==k){
            ans.push_back(curr);
            return ;
        }
        
        for(int i=index;i<=n;i++){
            curr.push_back(i);
            backtrack(i+1,k,n,curr);
            curr.pop_back();
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        
        backtrack(1,k,n,curr);
        
        return ans;
    }
};