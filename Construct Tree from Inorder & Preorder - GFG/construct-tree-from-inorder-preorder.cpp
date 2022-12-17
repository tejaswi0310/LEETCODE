// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node*build_tree(int in[], int pre[], int start, int end,int &curr)
    {
        if(start>end){
            return NULL;
        }
        
        Node* root=new Node(pre[curr++]);
        
        int root_index;
        
        for(int i=start;i<=end;i++){
            if(in[i]==root->data){
                root_index=i;
                break;
            }
        }
        
        root->left=build_tree(in,pre,start,root_index-1,curr);
        root->right=build_tree(in,pre,root_index+1,end,curr);
        
        return root;
        
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int curr=0;
        return build_tree(in,pre,0,n-1,curr);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends