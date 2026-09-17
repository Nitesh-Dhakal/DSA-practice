class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        if (a[0] == b[0]) {
            return a[1] > b[1]; 
        }
        return a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end(), comp);
        vector<int>tails;
        for(int i=0;i<nums.size();i++){
            int height=nums[i][1];
            auto it=lower_bound(tails.begin(),tails.end(),height);
            if(it==tails.end()){
                tails.push_back(height);
            }
            else{
                *it=height;
            }
        }
        return tails.size();
    }
};