class Solution {
public:
    int helper(vector<int> & coins, int amount,vector<int>& memo){
        if(amount==0)return 0;
        if(amount<0)return -1;
        if(memo[amount]!=-2){
            return memo[amount];
        }
        int minCoins = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int result=helper(coins,amount-coins[i],memo);
            if (result != -1) {
                minCoins = min(minCoins, result + 1);
            }
        }
        if(minCoins==INT_MAX){
            memo[amount]=-1;
        }
        else{
            memo[amount]=minCoins;
        }
        
        return memo[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>memo(amount+1,-2);
        return helper(coins,amount,memo);
    }
};