class Solution {
public:
    vector<vector<int>>ans;
    void helper(int index,int n,int k, vector<int>&curr){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        
        for(int i=index;i<=n;i++){
            curr.push_back(i);
            helper(i+1,n,k,curr);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        helper(1,n,k,curr);
        
        return ans;
    }
};