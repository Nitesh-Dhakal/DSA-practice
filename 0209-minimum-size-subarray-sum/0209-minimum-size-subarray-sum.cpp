class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
       
        int length=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            
             while(sum>=target){
                length=min(length,i-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        if(length==INT_MAX)return 0;
        return length;
    }
};