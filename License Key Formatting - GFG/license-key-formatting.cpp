//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string s, int k){
    	
    	string res="";
    	int count=0;
    	for(int i=s.size()-1;i>=0;i--){
    	    if(s[i]=='-'){
    	        continue;
    	    }
    	    if(count==k){
    	        res+='-';
    	        count=0;
    	    }
    	    
    	        res+=toupper(s[i]);
    	        count++;
    	    
    	}
    	reverse(res.begin(),res.end());
    	return res;
    	
    // 	 string ans="";

    //  int n=S.length();

    //  int cnt=0;

    //  for(int i=n-1;i>=0;i--){

    //      if(cnt==K){

    //          cnt=0;

    //          ans.push_back('-');

    //      }

    //      if(S[i]=='-') continue;

    //      ans.push_back(S[i]);

    //      cnt++;

    //  }

    //  reverse(ans.begin(), ans.end());

    //  string s="";

    //  for(int i=0;i<ans.length();i++)  {

    //      if(islower(ans[i])) s.push_back(toupper(ans[i]));

    //      else s.push_back(ans[i]);

    //  }

    //  if(s[0]=='-') s.erase(0,1);

    //  return s;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends