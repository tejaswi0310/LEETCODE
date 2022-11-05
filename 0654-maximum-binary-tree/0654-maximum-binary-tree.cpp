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
    int getMax(vector<int>&nums, int l, int r){
        int mx=INT_MIN;
        int index=-1;
        for(int i=l;i<=r;i++){
            if(nums[i]>mx){
                mx=nums[i];
                index=i;
            }
        }
        return index;
    }
    
    TreeNode* construct(vector<int>&nums, int start, int end){
        if(start>end){
            return NULL;
        }
        int k=getMax(nums,start,end);
        
        TreeNode* root=new TreeNode(nums[k]);
        root->left=construct(nums,start,k-1);
        root->right=construct(nums,k+1,end);
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int index=0;
        // int mx=INT_MIN;
        
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(mx==nums[i]){
                index=i;
                break;
            }
        }
        
        return construct(nums,0,n-1);
    }
};