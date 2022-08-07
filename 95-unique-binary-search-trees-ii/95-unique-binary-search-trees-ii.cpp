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
    vector<TreeNode*> rec(int start,int end)
    {
        if(start>end){
            return {NULL};
        }
        vector<TreeNode*>leftList,rightList,result;
        
        for(int i=start;i<=end;i++){
            leftList=rec(start,i-1);
            rightList=rec(i+1,end);
            
            for(auto l:leftList){
                for(auto r:rightList){
                    TreeNode *node=new TreeNode(i);
                    node->left=l;
                    node->right=r;
                    result.push_back(node);
                }
            }
        }return result;
    }
    vector<TreeNode*> generateTrees(int n) {
        return rec(1,n);
    }
};