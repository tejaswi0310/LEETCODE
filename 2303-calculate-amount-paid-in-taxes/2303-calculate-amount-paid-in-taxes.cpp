class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
//         double tax=0;
        
        
//         tax=min(income,brackets[0][0])*brackets[0][1];
        
//         for(int i=1;i<brackets.size();i++)
//         {
            
//             int x=min(brackets[i][0],income);
//             double y=brackets[i][1]*1.0;//tax
            
//             tax+=((x-brackets[i-1][0])*y)/100;
            
//             if(x>=income){
//                 break;
//             }
            
//         }
        
//         return tax;
        double ans=0;  
        if(income==0){
            return ans;
        }
        int prev=0; 
        for(int i=0;i<brackets.size();i++){
            int actual=min(brackets[i][0],income);
            ans+=((actual-prev)*brackets[i][1]*1.0)/100.0;
            if(brackets[i][0]>=income){
                break;
            }
            prev=brackets[i][0];
        }
        return ans;
    }
};