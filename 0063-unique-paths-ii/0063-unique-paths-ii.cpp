class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<int>dp(col,0);
        if(grid[0][0]==1)return 0;
        dp[0]=1;
        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                if(grid[r][c] != 1){
                    if(c>0){
                        dp[c]=dp[c]+dp[c-1];
                    }              
                }
                else{
                    dp[c]=0;
                }              
            }
        }
        return dp[col-1];
    }
};