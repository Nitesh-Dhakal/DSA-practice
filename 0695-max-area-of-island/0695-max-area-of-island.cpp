class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c){
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c]==0)return 0;
        int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        grid[r][c]=0;
        int area=1;
        for(int i=0;i<4;i++){
            int nr=r+dirs[i][0];
            int nc=c+dirs[i][1];
            area+=dfs(grid,nr,nc);
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    count=max(count,dfs(grid,r,c));
                }
            }
        }
        return count;
    }
};