class Solution {
public:
    unordered_set<int>s;
    void backtrack(vector<int>& candidates,int i, int target,vector<int>& arr,vector<vector<int>>& res){
        if(i==candidates.size()|| target<0){
            return;
        }
        if(target==0){
            res.push_back({arr});
            return;
        }
        arr.push_back(candidates[i]);
        backtrack(candidates,i,target-candidates[i],arr,res);
        arr.pop_back();
        backtrack(candidates,i+1,target,arr,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        vector<vector<int>>res;
        backtrack(candidates,0,target,arr,res);
        return res;
    }
};