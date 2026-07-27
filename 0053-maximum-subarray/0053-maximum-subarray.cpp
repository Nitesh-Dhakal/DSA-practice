class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int count = 0;
        int max_count = nums[0];
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
            if(count>max_count){
                max_count=count;
            }
            if(count<0){
                count=0;
            }
           
        } 
        return max_count;
    }
};