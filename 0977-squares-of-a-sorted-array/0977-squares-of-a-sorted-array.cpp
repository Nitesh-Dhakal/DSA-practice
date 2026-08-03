class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int>result;
        for(int i=0;i<arr.size();i++){
          result.push_back(arr[i] * arr[i]);
        }
          sort(result.begin(),result.end());
        return result;
    }
};