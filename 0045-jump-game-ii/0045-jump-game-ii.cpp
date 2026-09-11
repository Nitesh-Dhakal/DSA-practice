class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        
        int curr = 0;
        int maxx = 0;
        int steps = 0;
        int window_end = 0;
        for (int i = 0; i < nums.size() - 1; i++) { 
            curr = i + nums[i];
            
            if (curr > maxx) {
                maxx = curr;
            }
            
            if (i == window_end) {
                steps++;
                window_end = maxx;
            }
        }
        return steps;
    }
};