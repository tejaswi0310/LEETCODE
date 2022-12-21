//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool prime(int n){
	        if(n<2){
	            return false;
	        }
	        for(int i=2;i*i<=n;i++){
	            if(n%i==0){
	                return false;
	            }
	            
	        }return true;
	    }
		int Count(int L, int R){
		    int p=0,c(0);
		    for(int i=L;i<=R;i++){
		        if(prime(i)){
		            p++;
		        }
		        else if(!prime(i) and i>1){
		            c++;
		        }
		    }
		    
		    return (c-p);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends