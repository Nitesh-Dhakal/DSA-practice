class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                swap(nums[i],nums[right]);
                right++;
            }
        }
        return right;
    }
};