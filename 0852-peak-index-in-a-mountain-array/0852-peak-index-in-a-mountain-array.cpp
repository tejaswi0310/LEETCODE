class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int left[n],right[n];
        
        left[0]=arr[0],right[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],arr[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],arr[i+1]);
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>left[i] and arr[i]>right[i]){
                return i;
            }
        }
        return -1;
    }
};