class Solution {
public:
    bool helper(int i,vector<int>& nums,int target,vector<vector<int>>& memo){
        if (target == 0) return true;
        if (i >= nums.size() || target < 0) return false;
        if (memo[i][target] != -1) return memo[i][target];
        bool skip = helper(i + 1, nums, target, memo);
        bool take = false;
        if (nums[i] <= target) {
            take = helper(i + 1, nums, target - nums[i], memo);
        }
        memo[i][target] = skip || take;
        return memo[i][target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int target = sum / 2;
        vector<vector<int>> memo(nums.size(), vector<int>(target + 1, -1));
        return helper(0,nums,sum/2,memo);
    }
};