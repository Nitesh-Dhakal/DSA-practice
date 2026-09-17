class Solution {
public:
    int helper(int curr,int prev,vector<int>& nums, vector<vector<int>>& memo){
        if(curr==nums.size())return 0;
        if(memo[curr][prev+1] != -1) return memo[curr][prev+1];
        int take=0;
        if(prev==-1 || nums[curr]>nums[prev]){
            take=1+helper(curr+1,curr,nums,memo);
        }
        int skip=helper(curr+1,prev,nums,memo);
        memo[curr][prev+1]=max(take,skip);
        return memo[curr][prev+1];
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>memo(n,vector<int>(n+1,-1));
        return helper(0,-1,nums,memo);
    }
};