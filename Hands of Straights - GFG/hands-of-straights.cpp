//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int k, vector<int> &hand) {
        map<int,int>mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        
        for(auto it:mp){
            if(it.second>0){
                int freq=it.second;
                for(int i=0;i<k;i++){
                    if(mp[it.first+i]<freq){
                        return false;
                    }
                    else{
                        mp[it.first+i]-=freq;
                    }
                }
            }
        }return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends