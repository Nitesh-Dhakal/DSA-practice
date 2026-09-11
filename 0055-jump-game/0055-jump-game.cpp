class Solution {
public:
    bool canJump(vector<int>& nums) {
        int steps=0;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(i>steps)return false;
            curr=i+nums[i];
            if(curr>steps){
                steps=curr;
            }
        }
        return true;
    }
};