class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int n=people.size();
//         int j=n-1;
//         for(int i=0;i<n;){
//             if(i<j and people[i]+people[j]<=limit){
//                 count++;
//                 i++;
//                 j--;
//             }
            
//             else if(i+1<n and people[i]+people[i+1]<=limit){
//                 count++;
//                 i+=2;
//             }
            
//             else if(i<j and j>1 and people[j]+people[j-1]<=limit){
//                 count++;
//                 // i++;
//                 j-=2;
//             }
            
//             else{
//                 count++;
//                 i++;
//             }
//         }
//         return count;
        
        
        
        int i=0,j=n-1;
        
        while(i<=j){
            if(people[i]+people[j]<=limit){
                count++;
                i++;
                j--;
            }
            else if(people[i]+people[j]>limit){
                count++;
                j--;
            }
            
        }
        return count;
    }
};