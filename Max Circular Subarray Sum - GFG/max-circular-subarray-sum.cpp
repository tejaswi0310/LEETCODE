//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    int max_subarray_sum(int nums[], int n){
        int sum=nums[0],curr=nums[0];
        
        for(int i=1;i<n;i++){
            curr=max(curr+nums[i],nums[i]);
            sum=max(sum,curr);
        }return sum;
    }
    int min_subarray_sum(int nums[], int n){
        int sum=nums[0],curr=nums[0];
        
        for(int i=1;i<n;i++){
            curr=min(curr+nums[i],nums[i]);
            sum=min(sum,curr);
        }return sum;
    }
    int circularSubarraySum(int nums[], int num){
        int sum=0;
        for(int i=0;i<num ;i++){
            sum+=nums[i];
        }
        
        int ans1=max_subarray_sum(nums,num);
        int ans2=sum-min_subarray_sum(nums,num);
        
        return ans1>0?max(ans1,ans2):ans1;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends