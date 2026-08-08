class Solution {
public:
    int helper(vector<int>&nums,int n,vector<int>&memo){
        if (n < 0) {
        return 0; 
        }
        if (memo[n] != -1) {
            return memo[n];
        }
        int rob=nums[n]+helper(nums,n-2,memo);
        int skip=helper(nums,n-1,memo);
        memo[n]=max(rob,skip);
        return memo[n];
}
    int rob(vector<int>& nums) {
        vector<int>memo(nums.size(),-1);
        int lastindex=nums.size()-1;
        return helper(nums,lastindex,memo);
    }
};