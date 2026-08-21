class Solution {
public:
    bool isvalid(vector<string>& boards,int n ,int row,int col){
        for(int j=0;j<n;j++){
            if(boards[row][j]=='Q'){
                return false;
            }
        }
        for(int i=0;i<n;i++){
           if(boards[i][col]=='Q') 
            {return false;}
        }
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(boards[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row, j=col;i>=0 && j<n;i--,j++){
            if(boards[i][j]=='Q'){
                return false;
            }
        }
        return true;
    } 
    void queen(vector<string>& boards,int n ,int row,vector<vector<string>>& res){
        if(row==n){
            res.push_back(boards);
            return;
        }
        for(int j=0;j<n;j++){
            if(isvalid(boards,n,row,j)){
                boards[row][j]='Q';
                queen(boards,n,row+1,res);
                boards[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>boards(n,string(n,'.'));
        vector<vector<string>>res;
        queen(boards,n,0,res);
        return res;
    }
};