class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int left=0,right=mat[0].size()-1;
        int top=0,down=mat.size()-1;
        
        int dir=0;
        vector<int>v;
        while(left<=right and top<=down){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    v.push_back(mat[top][i]);
                }
                top++;
            }
            
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    v.push_back(mat[i][right]);
                }
                right--;
            }
            
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    v.push_back(mat[down][i]);
                }
                down--;
            }
            
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    v.push_back(mat[i][left]);
                }
                left++;
            }
            
            dir=(dir+1)%4;
        }
        
        return v;
    }
};