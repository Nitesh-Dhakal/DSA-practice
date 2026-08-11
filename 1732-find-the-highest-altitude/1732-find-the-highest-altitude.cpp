class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>prefix(n+1);
        prefix[0]=0;
        for(int i=0;i<gain.size();i++){
            prefix[i+1]=prefix[i]+gain[i];
        }
        int maxValue = *max_element(prefix.begin(), prefix.end());
        return maxValue;
    }
};