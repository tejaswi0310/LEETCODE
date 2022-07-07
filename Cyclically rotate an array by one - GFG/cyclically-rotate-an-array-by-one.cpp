// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    if(n==1){
        return;
    }
    int first=arr[n-1];
    int last=arr[n-2];
    for(int i=n-2;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=first;
    arr[n-1]=last;
}