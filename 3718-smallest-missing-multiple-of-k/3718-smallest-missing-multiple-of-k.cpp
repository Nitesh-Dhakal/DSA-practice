class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int current=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==current){
                current=current+k;
            }
            if(nums[i]>current){
                break;
            }
        }
        return current;
    }
};