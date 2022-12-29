//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int p=1e9+7;
    long long power(long long x, long long y){
        long long res=1;
        x=x%p;
        
        if(x==0){
            return 0;
        }
        while(y>0){
            if(y%2){
                res=(res*x)%p;
            }
            y/=2;
            x=(x*x)%p;
        }return res;
    }
    int countGoodNumbers(long long n) {
        long long fours=n/2;
        long long five=n-n/2;
        
        return (power(4,fours)%p * (power(5,five)%p))%p;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;

        cout << ob.countGoodNumbers(N) << endl;
    }
}
// } Driver Code Ends