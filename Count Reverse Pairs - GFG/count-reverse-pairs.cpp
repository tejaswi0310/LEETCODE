//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int count;
    void merge(vector<int>&arr, int start, int end, int mid){
        int l=start, r=mid+1;
        
        while(l<=mid and r<=end){
            if(arr[l]>2*arr[r]){
                count+=(mid-l+1);
                r++;
            }
            else{
                l++;
            }
        }
        sort(arr.begin()+start,arr.begin()+end+1);
        return;
    }
    
    void mergeSort(vector<int>&arr, int start, int end){
        if(start==end){
            return;
        }
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        
        merge(arr,start,end,mid);
        return;
    }
    
    int countRevPairs(int n, vector<int> arr) {
        if(!arr.size()){
            return 0;
        }
        count=0;
        mergeSort(arr,0,n-1);
    
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends