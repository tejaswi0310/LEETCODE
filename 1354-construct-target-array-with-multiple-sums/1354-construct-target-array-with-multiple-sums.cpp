class Solution {
public:
    
    bool isPossible(vector<int>& arr) {
        priority_queue<int>pq;
        unsigned int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            pq.push(arr[i]);
        }
        while(pq.top()!=1){
            int curr=pq.top();
            pq.pop();
            
            sum-=curr;
            
            if(sum<1 or curr<=sum){
                return false;
            }
            
            curr%=sum;
            
            sum+=curr;
            
            pq.push(curr?curr:sum);//if curr is 0 then we push the sum
        }
        
        return true;
    }
};