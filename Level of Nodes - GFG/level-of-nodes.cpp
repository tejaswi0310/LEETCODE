// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int v, vector<int> adj[], int X) 
	{
	   // int level=0;
	    
	   // bool vis[v+1];
	    
	   // for(int i=0;i<v+1;i++){
	   //     vis[i]=false;
	   // }
	    
	   // queue<int>q;
	   
	   // vis[0]=true;
	    
	   // q.push(0);
	    
	   // while(!q.empty()){
	   //     int size=q.size();
	   //     while(size--){
	   //         int node=q.front();
	   
	   //         q.pop();
	        
	   //     for(int i=0;i<adj[node].size();i++){
	   //         if(adj[node][i]==X){
	   //             return level+1;
	   //         }
	            
	   //         if(vis[adj[node][i]]==false){
	   //             vis[adj[node][i]]=true;
	   //             q.push(adj[node][i]);
	   //         }
	   //     }
	   //     }
	        
	   //     level++;
	   // }
	   // return -1;
	    
	    
	    
	    int level=0;
	    
	    bool vis[v+1];
	    for(int i=0;i<v+1;i++){
	        vis[i]=false;
	    }
	    
	    vis[0]=true;
	    
	    queue<int>q;
	    q.push(0);
	    
	    while(!q.empty())
	    {
	        int size=q.size();
	        while(size--){
	            int node=q.front();
	            q.pop();
	            for(int i=0;i<adj[node].size();i++){
	                if(adj[node][i]==X){
	                    return level+1;
	                }
	                if(!vis[adj[node][i]]){
	                    vis[adj[node][i]]=true;
	                    q.push(adj[node][i]);
	                }
	            }
	        }
	        level++;
	    }
	    
	    return -1;
	    
	    
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends