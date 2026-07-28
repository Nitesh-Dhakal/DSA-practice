class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=0;
        int n=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[i],nums[x]);
                x++;
            }
            else{
                n++;
            }
        }
         return x;
    }
};