class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0;
        int prev2 = 0;
        int timeline1 = 0;
        int timeline2 = 0;
        int p1 = 0;
        int p2 = 0;
        if(nums.size()==1)return nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
            int current = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = current;
        }
        timeline1 = prev1;
        for (int i = 1; i < nums.size(); i++) {
            int current = max(nums[i] + p2, p1);
            p2 = p1;
            p1 = current;
        }
        timeline2=p1;
        return max(timeline1,timeline2);
    }
};