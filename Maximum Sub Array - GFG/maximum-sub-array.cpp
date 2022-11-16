//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int sum(vector<int>v){
        int x=0;
        for(int i=0;i<v.size();i++){
            x+=v[i];
        }return x;
    }
	vector<int> findSubarray(int arr[], int n) {
	    vector<vector<int>>v;
	    vector<int>temp;
	    int i=0;
	    while(i<n){
	        if(arr[i]<0){
	            v.push_back(temp);
	            temp.clear();
	           // i++;
	        }
	        else{
	            temp.push_back(arr[i]);
	        }
	        i++;
	    }
	    v.push_back(temp);
	    vector<int>ans= {-1};
	    for(int i=0;i<v.size();i++){
	        if(sum(v[i])>sum(ans) and v[i].size()>0){
	            ans=v[i];
	        }
	    }return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends