class Solution {
public:
    int helper(int i,int amount,vector<int>& coins,vector<vector<int>>& memo){
        if(amount==0)return 1;
        if(i==coins.size())return 0;
        if(memo[i][amount] != -1)return memo[i][amount];
        int skip=helper(i+1,amount,coins,memo);
        int take=0;
        if(coins[i]<=amount){
            take=helper(i,amount-coins[i],coins,memo);
        }
        memo[i][amount]=skip+take;
        return memo[i][amount];
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>memo(coins.size(),vector<int>(amount+1,-1));
        return helper(0,amount,coins,memo);
    }
};