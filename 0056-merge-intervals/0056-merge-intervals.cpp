class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>merged;
        vector<int>currentinterval=intervals[0];
        for(int i=1;i<intervals.size();i++){
            vector<int>nextinterval=intervals[i];
            if(nextinterval[0]<=currentinterval[1]){
                currentinterval[1]=max(currentinterval[1],nextinterval[1]);
            }
            else{
                merged.push_back(currentinterval); currentinterval=nextinterval;
            }
        }
        merged.push_back(currentinterval);
        return merged;

    }
};