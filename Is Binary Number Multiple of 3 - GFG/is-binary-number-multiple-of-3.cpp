//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	//  Basically count the number of non-zero odd positions bits and non-zero even position bits from the right.

//  If their difference is divisible by 3, then the number is divisible by 3.

 int isDivisible(string s){

     int even=0;

     int odd=0;

     for(int i=0;i<s.size();i++){

         if(i%2==0 && s[i]=='1'){

             odd++;

         }

         else if(i%2==1 && s[i]=='1'){

             even++;

         }

     }

     if((odd-even)%3==0) return 1;

     return 0;

 }

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends