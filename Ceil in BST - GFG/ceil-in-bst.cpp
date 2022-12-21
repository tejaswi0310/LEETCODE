//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int findCeil(Node* root, int input);

int main() {

    int t;
    scanf("%d ", &t);
    while (t--) {
        string s;
        getline(cin >> ws, s);
        int x;
        cin >> x;
        Node* root = buildTree(s);
        cout << findCeil(root, x) << endl;
    }
    return 1;
}

// } Driver Code Ends


// User function Template for C++

void inorder(Node* root, vector<int>&v){
    if(!root){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    vector<int>v;
    inorder(root,v);
    
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==input){
            return v[i];
        }
        else if(input>v[i] and input<v[i+1]){
            return v[i+1];
        }
    }
    if(v[v.size()-1]){
        return v[v.size()-1];
    }
    
}