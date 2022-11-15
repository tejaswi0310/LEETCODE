//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int N){
	    int low=0,high=N-1;
	    
	    while(low<high){
	        int mid=(low+high)/2;
	        if((mid%2==0 and arr[mid]==arr[mid+1]) || (mid%2 and arr[mid]==arr[mid-1])){
	            low=mid+1;
	        }
	        else{
	            high=mid;
	        }
	    }return arr[low];
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends