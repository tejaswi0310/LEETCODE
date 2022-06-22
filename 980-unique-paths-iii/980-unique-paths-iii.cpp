class Solution {
public:
    int res=0,empty=1;
    void dfs(vector<vector<int>>& grid,int x,int y,int count)
    {
        if(x<0 or x>=grid.size() or y<0 or y>=grid[0].size() or grid[x][y]==-1){
            return ;
        }
        if(grid[x][y]==2){
            if(count==empty){//if we reached the final cell and count==empty it means that we have travelled through every empty cell
                res++;
            }
            return;
        }
        
        grid[x][y]=-1;
        
        dfs(grid, x+1, y, count+1);
        dfs(grid, x, y+1, count+1);
        dfs(grid, x-1, y, count+1);
        dfs(grid, x, y-1, count+1);
        
        grid[x][y]=0;
        
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int start_x,start_y;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    start_x=i,start_y=j;
                }
                else if(grid[i][j]==0){//counting the empty cells
                    empty++;
                }
            }
        }
        
        dfs(grid,start_x,start_y,0);
        
        return res;
    }
};