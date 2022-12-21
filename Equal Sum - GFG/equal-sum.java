//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            String ans = new Solution().equilibrium(a, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    String equilibrium(int arr[], int n) {
        int pref[]=new int[n];
        int suff[]=new int[n];
        
        for(int i=0;i<n;i++){
            if(i==0){
                pref[i]=arr[i];
            }
            else{
                pref[i]=pref[i-1]+arr[i];
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                suff[i]=arr[i];
            }
            else{
                suff[i]=suff[i+1]+arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(pref[i]==suff[i]){
                return "YES";
            }
        }return "NO";
    }
}