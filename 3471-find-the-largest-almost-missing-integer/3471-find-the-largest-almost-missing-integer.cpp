class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>freq(51,0);
        for(int num:nums){
            freq[num]++;
        }
        if(k==nums.size()){
            int maxx=-1;
            for(int num:nums){
                 maxx=max(maxx,num);
            }
            return maxx;
        }
        if(k==1){
            int maxx=-1;
            for(int num:nums){
                if(freq[num]==1){
                    maxx=max(maxx,num);
                }
            }
            return maxx;
        }
        int maxx=-1;
        if(freq[nums[0]]==1){
            maxx=max(maxx,nums[0]);
        }
        if(freq[nums[nums.size()- 1]]==1){
            maxx=max(maxx,nums[nums.size()-1]);
        }
        return maxx;
    }
};