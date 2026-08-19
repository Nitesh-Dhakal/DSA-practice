class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>res;
        for(int num:nums){
            res[num]++;
        }
        for(auto pair:res){
            int key=pair.first;
            int val=pair.second;
            if(val>n/2){
                return key;
            }
        }
        return{};
    }
};