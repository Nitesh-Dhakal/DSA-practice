class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int profit = 0;
        int max = 0;
        while (sell<prices.size()){
            if (prices[buy]<prices[sell]){
               profit = prices[sell] - prices[buy];
            }
            else{
           buy = sell;
           }
            if(profit>max ){
                max=profit;
            }
           sell++;
        }
        return max;
};
} ;