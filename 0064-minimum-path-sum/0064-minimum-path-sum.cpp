class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<int>dp(col,0);
        dp[0]=grid[0][0];
        for(int i=1;i<col;i++){
            dp[i]=grid[0][i]+dp[i-1];
        }
        for(int r=1;r<row;r++){
            dp[0]=dp[0]+grid[r][0];
            for(int c=1;c<col;c++){
                dp[c]=grid[r][c]+min(dp[c-1],dp[c]);
            }
        }
        return dp[col-1];
    }
};