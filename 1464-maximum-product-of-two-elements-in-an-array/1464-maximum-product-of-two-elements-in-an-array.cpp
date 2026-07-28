class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=nums[0];
        int second_max=0;
        
        for(int i=1;i<nums.size();i++){
            if (nums[i]>=max){
                second_max=max;
                max=nums[i];
            }
          else if(nums[i]>second_max){
            second_max=nums[i];
            }
            }
              int product=(max-1)*(second_max-1);
            return product;
        }
    
};