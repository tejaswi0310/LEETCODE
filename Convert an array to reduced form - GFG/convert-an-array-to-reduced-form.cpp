//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int binary_search(int arr[], int n, int x){
	    int low=0,high=n-1;
	    while(low<=high){
	        int mid=(low+high)/2;
	        if(arr[mid]==x){
	            return mid;
	        }
	        if(arr[mid]>x){
	            high=mid-1;
	        }
	        else{
	            low=mid+1;
	        }
	    }
	}
	void convert(int arr[], int n) {
	    int narr[n];
	    for(int i=0;i<n;i++){
	        narr[i]=arr[i];
	    }
	    
	    sort(narr,narr+n);
	    
	    for(int i=0;i<n;i++){
	        arr[i]=binary_search(narr,n,arr[i]);
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends