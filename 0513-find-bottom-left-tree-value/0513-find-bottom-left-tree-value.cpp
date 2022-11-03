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
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root){
            return 0;
        }
        int h=height(root);
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* f=q.front();
                q.pop();
                if(!f->left and !f->right and level==h-1){
                    return f->val;
                }
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }level++;
            
        }return 0;
    }
};