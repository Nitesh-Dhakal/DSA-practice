class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int maxx=nums[0];
        int n=nums.size();int minn=nums[0];
        for(int i=0;i<nums.size();i++){
            
            int minn=nums[i];
            maxx=max(maxx,nums[i]);
            for(int j=n-1;j>=i;j--){
                minn=min(minn,nums[j]);
                }
            if((maxx-minn)<=k){
                return i;
            }
        }
        return -1;
    }
};