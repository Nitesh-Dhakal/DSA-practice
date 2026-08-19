class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_set<int>res(nums.begin(),nums.end());
        int streak=0;
        for(int num:res){
            if(!res.count(num-1)){
                int start=num;
                int current= 1;
                while(res.count(start+1)){
                start++;
                current++;
                }
                streak=max(streak,current);
            }
        }  
        return streak;
    }
};