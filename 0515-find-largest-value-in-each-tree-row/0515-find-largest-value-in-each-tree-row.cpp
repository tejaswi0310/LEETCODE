/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>v;
        if(!root){
            return v;
        }
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            int mx=INT_MIN;
            for(int i=0;i<size;i++){
                TreeNode* f=q.front();
                q.pop();
                mx=max(mx,f->val);
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }
            v.push_back(mx);
        }
        return v;
    }
};