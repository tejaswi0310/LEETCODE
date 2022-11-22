//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int count=0;
	    for(int i=1;i<nums.size()-1;i++){
	        int count1=0,count2=0;
	        for(int j=i+1;j<nums.size();j++){
	            if(nums[i]<nums[j]){
	                count1++;
	            }
	        }
	        
	        for(int j=i-1;j>=0;j--){
	            if(nums[i]>nums[j]){
	                count2++;
	            }
	        }
	        count+=(count1*count2);
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends