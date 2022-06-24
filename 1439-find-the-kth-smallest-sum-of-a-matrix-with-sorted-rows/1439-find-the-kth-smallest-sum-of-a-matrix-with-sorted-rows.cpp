class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int>ans={0};
        
        for(int i=0;i<mat.size();i++){
            vector<int>temp;
            
            for(int j=0;j<mat[0].size();j++){
                for(int k=0;k<ans.size();k++){
                    temp.push_back(mat[i][j]+ans[k]);//mat[i][j] is the matrix element and ans[k] is the the elements of the particular row of a matrix
                }
            }
            
            sort(temp.begin(),temp.end());
            
            int trim_size=min(k+1,(int)temp.size());//trim size
            ans.clear();
            
            for(int m=0;m<trim_size;m++){
                ans.push_back(temp[m]);
            }
        }
        
        return ans[k-1];
    }
};