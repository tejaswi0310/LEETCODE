//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // vector<pair<int,int>>res;
        // sort(a,a+n);
        // sort(b,b+m);
        
        // int i=0,j=0;
        // while(i<n and j<m){
        //     if(a[i]+b[j]==X){
        //         res.push_back({a[i],b[j]});
        //         i++;j++;
        //     }
        //     else if(a[i]+b[j]>X){
        //         if(a[i]>b[j]){
        //             i++;
        //         }
        //         else{
        //             j++;
        //         }
        //     }
        //     else{
        //         if(a[i]<b[j]){
        //             j++;
        //         }
        //         else{
        //             i++;
        //         }
        //     }
        // }
        // return res;
        
        vector<pair<int,int>>res;
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<m;i++){
            if(mp.find(x-b[i])!=mp.end()){
                res.push_back({x-b[i],b[i]});
                mp[x-b[i]]--;
                if(mp[x-b[i]]==0){
                    mp.erase(x-b[i]);
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends