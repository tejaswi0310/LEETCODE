class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans=0;
        int minm=prices[0];
        for(int i=1;i<prices.size();i++){
            minm=min(minm,prices[i]);
            if(prices[i]-fee>minm){
                ans+=prices[i]-fee-minm;
                minm=prices[i]-fee;
            }
        }
        return ans;
    }
};