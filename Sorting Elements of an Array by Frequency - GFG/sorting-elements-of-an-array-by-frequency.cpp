#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p2.second==p1.second){
        return p1.first<p2.first;
    }
    
    return p1.second> p2.second;
}




int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    vector<pair<int,int>>v;
	    
	    unordered_map<int,int>mp;
	    
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    
	    for(auto it:mp){
	        v.push_back({it.first,it.second});
	    }
	    
	    sort(v.begin(),v.end(),comp);
	    
	    for(auto it:v){
	        for(int j=0;j<it.second;j++){
	            cout<<it.first<<' ';
	        }
	    }
	    cout<<endl;
	}
}