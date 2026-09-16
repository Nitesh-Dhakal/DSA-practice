class Solution {
public:
    int helper(int i,vector<int>& prices,vector<vector<int>>& memo,int can,int fee){
        if(i==prices.size())return 0;
        if(memo[i][can] != -1)return memo[i][can];
        int profit=0;
        if(can==0){
            int buy= -prices[i]+helper(i+1,prices,memo,1,fee);
            int skip=helper(i+1,prices,memo,0,fee);
            profit=max(buy,skip);
        }
        else{
            int sell=prices[i]+helper(i+1,prices,memo,0,fee)-fee;
            int skip=helper(i+1,prices,memo,1,fee);
            profit=max(skip,sell);
        }
        memo[i][can]=profit;
        return profit;
    }
    int maxProfit(vector<int>& prices,int fee) {
        vector<vector<int>>memo(prices.size(),vector<int>(2,-1));
        return helper(0,prices,memo,0,fee);
    }
};