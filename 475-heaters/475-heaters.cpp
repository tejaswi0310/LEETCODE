class Solution {
public:
    bool is_possible(vector<int>&houses, vector<int>&heaters, int x)
    {
        int i=0,j=0;
        while(i<houses.size() and j<heaters.size()){
            int h=houses[i];//ith house position
            int l=heaters[j]-x;//house is dono value ke beech me aana chahiye tabhi possible hoga
            int r=heaters[j]+x;
            
            if(h>=l and h<=r){
                i++;
            }
            else{
                j++;
            }
        }
        
        return i==houses.size();
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int low=0,high=1e9;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(is_possible(houses,heaters,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};