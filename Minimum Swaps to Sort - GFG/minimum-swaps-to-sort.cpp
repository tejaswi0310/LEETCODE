//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<int>v=nums;
	    sort(v.begin(),v.end());
	    map<int,int>mp;
	    for(int i=0;i<v.size();i++){
	        mp[v[i]]=i;
	    }
	    int count=0;
	    
	    for(int i=0;i<nums.size();i++){
	        if(i!=mp[nums[i]]){
	            count++;
	            swap(nums[i],nums[mp[nums[i]]]);
	            i--;//because we need to again start from that particular index
	        }
	    }return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends