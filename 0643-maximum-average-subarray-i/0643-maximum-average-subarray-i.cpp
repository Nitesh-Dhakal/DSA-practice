class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max=0;
        double current=0;
        for(int i=0;i<k;i++){
            current=current+nums[i];
        } 
        max=current;
        for(int j=k;j<nums.size();j++){
            current=current-nums[j-k]+nums[j];
            if(current>max){
                max=current;
            }
        }
        return max/k;
    }
};