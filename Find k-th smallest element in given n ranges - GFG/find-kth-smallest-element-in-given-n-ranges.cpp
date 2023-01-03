//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(vector<vector<int>>&range, vector<int>queries){
        // vector<int>v;
        // unordered_set<int>s;
        // for(int i=0;i<range.size();i++){
        //     int x=range[i][0];
        //     int y=range[i][1];
            
        //     for(int i=x;i<=y;i++){
        //         s.insert(i);
        //     }
        // }
        // for(auto it:s){
        //     v.push_back(it);
        // }
        // sort(v.begin(),v.end());
        
        // vector<int>res;
        
        // for(int i=0;i<queries.size();i++){
        //     if(queries[i]>v.size()){
        //         res.push_back(-1);
        //     }
        //     else res.push_back(queries[i]);
        // }
        // return res;
        
        unordered_set<int> st;
        for(auto &e: range){
            for(int i = e[0]; i <= e[1]; i++){
                st.insert(i);
            }
        }
        vector<int> dp;
        for(auto &e: st){
            dp.push_back(e);
        }
        sort(dp.begin(), dp.end());
        vector<int> ans;
        for(auto &e : queries){
            if(e > dp.size()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(dp[e - 1]);
            }
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(range, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends