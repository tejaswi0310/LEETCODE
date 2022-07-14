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
    
    TreeNode* build_tree(vector<int> pre, vector<int>& in, int &curr,int start,int end){
        if(start>end){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(pre[curr++]);
        
        int root_index=0;
        for(int i=start;i<=end;i++){
            if(in[i]==root->val){
                root_index=i;
                break;
            }
        }
        
        
        
        root->left=build_tree(pre,in,curr,start,root_index-1);
        root->right=build_tree(pre,in,curr,root_index+1,end);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& pre , vector<int>& in ) {
        int curr=0;
        
        return build_tree(pre,in,curr,0,in.size()-1);
    }
};