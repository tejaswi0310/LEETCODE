// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int n, int m)
        {
            int ans=0,row=0;
            
            for(int i=0;i<n;i++)
            {
                int l=0,r=m-1,mx=m-1;
                
                while(l<=r)
                {
                    int mid=(l+r)/2;
                    
                    if(mat[i][mid]==1){
                        mx=mid;
                        r=mid-1;
                    }
                    else{
                        l=mid+1;
                    }
                    
                    if(m-1-mx>ans){
                        ans=m-1-mx;
                        row=i;
                        
                    }
                }
            }
            return row;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends