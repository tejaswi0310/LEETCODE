//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        int count=0;
        int sum=0;
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            if(sum==0){
                count++;
            }
            if(mp.find(sum)!=mp.end()){
                count+=mp[sum];
            }
            mp[sum]++;
        }return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends