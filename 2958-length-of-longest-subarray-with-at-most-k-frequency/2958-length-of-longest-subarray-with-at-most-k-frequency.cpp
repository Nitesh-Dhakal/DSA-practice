class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int length=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
                count[nums[i]]++;
                while(count[nums[i]]>k){
                    count[nums[left]]--;
                    left++;
                }
                length = max(length, i - left + 1);
        }
        return length;
    }
};