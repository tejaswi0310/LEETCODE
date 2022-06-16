// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int N, int M)
        {
            int ones=0,row=0;
            int mn=0;
            for(int i=0;i<N;i++){
                for(int j=0;j<M;j++){
                    if(mat[i][j]==1){
                        mn++;
                    }
                }
                if(mn>ones){
                    ones=mn;
                    row=i;
                }
                mn=0;
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