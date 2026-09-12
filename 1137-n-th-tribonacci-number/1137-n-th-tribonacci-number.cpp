class Solution {
public:
    int helper(int n ,vector<int>& memo){
        if(n==0)return 0;
        if(n==1 || n==2)return 1;
        if(memo[n] != -1)return memo[n];
        int result=helper(n-1,memo)+helper(n-2,memo)+helper(n-3,memo);
        memo[n]=result;
        return memo[n];
    }
    int tribonacci(int n) {
        vector<int>memo(n+1,-1);
        return helper(n,memo);
    }
};