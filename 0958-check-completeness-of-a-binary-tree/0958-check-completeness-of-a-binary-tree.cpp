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
    
    bool isCompleteTree(TreeNode* root) {
        if(!root){
            return true;;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool pre=true;
        
        while(!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            
            if(f==NULL){
                pre=false;
            }
            
            else {
                if(!pre){
                return false;
                }
            
                q.push(f->left);
                q.push(f->right);
                
            }
        }
        return true;
    }
};