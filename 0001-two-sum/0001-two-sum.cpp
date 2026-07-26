class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            int current_number = nums[i];
            int needed_number = target-current_number;
            if(seen.count(needed_number)>0){
                return {seen[needed_number],i};
            }
            seen[current_number]=i;
        }
        return {};
    }
};