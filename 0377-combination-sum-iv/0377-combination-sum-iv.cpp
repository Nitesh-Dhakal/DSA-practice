class Solution {
public:
    int helper(int i,vector<int>& nums, int target,vector<int>& memo){
        if(target==0)return 1;
        if (memo[target] != -1) return memo[target];
        int total=0;
        for(int num:nums){
            if(num<=target){
                total+=helper(num,nums,target-num,memo);
            }
           
        }
        memo[target] = total;
        return memo[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> memo(target + 1, -1);
        return helper(0,nums,target,memo);
    }
};