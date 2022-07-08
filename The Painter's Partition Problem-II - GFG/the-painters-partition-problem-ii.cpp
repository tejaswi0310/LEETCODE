// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isValid(int arr[],int n,long long int m,long long int max){
        int student=1;//1st student
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max){
                student++;
                sum=arr[i];
            }
            if(student>m){
                return false;
            }
        }return true;
    }
    long long minTime(int arr[], int n, int m)
    {
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(m==1){
            return sum;
        }
        if(n==1){
            return arr[0];
        }
        if(m>n){
            return *max_element(arr,arr+n);
        }
        if(n<m){
            return -1;
        }
        int start=-1; //max
        long long int end=0; //total
        
        for(int i=0;i<n;i++){
            start=max(arr[i],start);
            end+=arr[i];
        }
        long long int ans=-1;
        long long int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(isValid(arr,n,m,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends