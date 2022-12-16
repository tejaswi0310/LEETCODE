// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool is_possible(int arr[], int n, int m, int mid){
        int count=0;
        int curr=0;
        
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr>mid){
                count++;
                curr=arr[i];
            }
            if(count>=m){
                return false;
            }
        }return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int l=arr[n-1],r=sum;
        int res=-1;
        
        if(n<m){
            return -1;
        }
        
        while(l<=r){
            int mid=(l+(r-l)/2);
            if(is_possible(arr,n,m,mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends