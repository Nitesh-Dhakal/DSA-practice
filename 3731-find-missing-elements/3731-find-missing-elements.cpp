class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;
            unordered_set<int>actual(nums.begin(),nums.end());
        int max=nums[0];
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
           if(nums[i]>max){
            max=nums[i];
           }
           else if(nums[i]<min){
            min=nums[i];
           }
        } 
        for(int i=min;i<max;i++){
            if(actual.find(i)!=actual.end()){

            }
            else{
                result.push_back(i);
            }
        }
        
        return result;
    }
};