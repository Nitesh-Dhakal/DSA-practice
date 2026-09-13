class Solution {
public:
    int helper(int r,int c,int m,int n,vector<vector<int>>& memo){
        if(r>=m || c>=n)return 0;
        if(r==m-1 && c==n-1)return 1;
        if(memo[r][c] != -1)return memo[r][c];
        int right=helper(r,c+1,m,n,memo);
        int down=helper(r+1,c,m,n,memo);
        memo[r][c]=right+down;
        return memo[r][c];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>memo(m,vector<int>(n,-1));
        return helper(0,0,m,n,memo);
    }
};