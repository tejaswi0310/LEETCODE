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
    int ans=0;
    void findpaths(TreeNode *root , long long int sum){
        if(root==NULL){
            return ;
        }
        
        if(root->val==sum){
            ans++;
        }
        if(root->left)
            findpaths( root->left , sum-root->val);
        if(root->right)
            findpaths( root->right ,sum-root->val);
        
    }
    int pathSum(TreeNode* root, int t) {
        if(root){
        findpaths( root ,t);
        if(root->left){
        pathSum( root->left ,t);
        }
        if(root->right){
        pathSum( root->right ,t);
        }
        }
        return ans;
    }
};