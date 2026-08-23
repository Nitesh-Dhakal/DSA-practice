class Solution {
public:
    bool isvalid(vector<vector<char>>& board,int row,int col,int val){
        for(int i=0;i<board.size();i++){
            if(board[row][i]==val)return false;
            if(board[i][col]==val)return false;
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        int n=board.size();
        for(int i=0;i<n;i++){
            for(int col=0;col<n;col++){
             if(board[i][col]=='.'){
                for(char val='1';val<='9';val++){
                    if(isvalid(board,i,col,val)){
                        board[i][col]=val;
                        if(solve(board)==true){
                            return true;
                        }
                        board[i][col]='.';
                    }
                }
                return false;
             }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};