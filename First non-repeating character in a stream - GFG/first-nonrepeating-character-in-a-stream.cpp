//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    unordered_map<char,int>mp;
		    queue<char>q;
		    string ans="";
		    for(int i=0;i<s.size();i++){
		        mp[s[i]]++;
		        if(mp[s[i]]==1){
		            q.push(s[i]);
		        }
		        else if(mp[q.front()]>1){
		            while(!q.empty() and mp[q.front()]>1)
		                q.pop();
		        }
		        if(!q.empty()){
		                ans+=q.front();
		            }
		            else{
		                ans+='#';
		            }
		        
		    }return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends