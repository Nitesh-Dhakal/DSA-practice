class Solution {
public:
    int helper(int i,vector<int>& arr ,int n,vector<vector<int>>& memo){
        if(n==0)return 0;
        if(i==arr.size())return 1e9;
        if(memo[i][n] != -1)return memo[i][n];
        int skip=helper(i+1,arr,n,memo);
        int take=1e9;
        if(arr[i]<=n){
            take=1+helper(i,arr,n-arr[i],memo);
        }
        memo[i][n]=min(take,skip);
        return memo[i][n];
    }
    int numSquares(int n) {
        vector<int>arr;
        for(int i=1;i * i <= n;i++){
            arr.push_back(i*i);
        }
        vector<vector<int>>memo(arr.size(),vector<int>(n+1,-1));
        return helper(0,arr,n,memo);
    }
};