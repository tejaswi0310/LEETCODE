//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    void recursion(vector<int>arr, int n, int index, vector<int>&v, vector<vector<int>>&res){
        res.push_back(v);
        
        for(int i=index;i<arr.size();i++){
            if(i==index or arr[i]!=arr[i-1]){
                v.push_back(arr[i]);
                recursion(arr,n,i+1,v,res);
                v.pop_back();
            }
            
        }
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<int>v;
        vector<vector<int>>res;
        recursion(arr,n,0,v,res);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends