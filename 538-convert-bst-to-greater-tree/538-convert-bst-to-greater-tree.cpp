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
//     void inorder(TreeNode* root,vector<int>&v)
//     {
//         if(!root){
//             return;
//         }
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     int sum(int x,vector<int>&v)
//     {
//         int pos=binary_search(v.begin(),v.end(),x);
        
//         int cost=0;
//         for(int i=pos;i<v.size();i++){
//             cost+=v[i];
//         }return cost;
//     }   
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root){
            return NULL;
        }
        
        convertBST(root->right);
        root->val+=sum;
        sum=root->val;
        convertBST(root->left);
        return root;
        
//         vector<int>v;
//         inorder(root,v);
//         queue<TreeNode*>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode* curr=q.front();
//                 q.pop();
//                 if(curr->right){
//                     q.push(curr->right);
//                 }
//                 if(curr->left){
//                     q.push(curr->left);
//                 }
                
//                 curr->val=sum(curr->val,v);
//             }}
//         return root;
    }
};