class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<int>res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min;
        for(auto count:map){
            min.push({count.second,count.first});
            if(min.size()>k){
                min.pop();
            }
        }
        while(min.size()>0){
            res.push_back(min.top().second);
            min.pop();
        }
        return res;
    }
};