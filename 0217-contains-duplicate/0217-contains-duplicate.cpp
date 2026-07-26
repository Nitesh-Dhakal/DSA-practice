class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for (int i=0;i<nums.size();i++){
            int number = nums[i];
            if(seen.count(number)>0){
                return true;
            }
            else{ seen.insert(number);}
           
        }
        return {};
    }
};