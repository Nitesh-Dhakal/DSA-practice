class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set(nums.begin(),nums.end());
        int current=k;
        while(set.count(current)){
            current=current+k;
        }
        return current;
    }
};