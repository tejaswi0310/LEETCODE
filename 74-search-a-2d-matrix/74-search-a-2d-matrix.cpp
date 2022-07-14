class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int i=0,j=n-1;
        
        if(m==1 and n==1){
            return mat[0][0]==target;
        }
        
        while(i<m and j>=0){
            if(mat[i][j]==target){
                return true;
            }
            else if(mat[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }return false;
    }
};