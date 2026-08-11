class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>prefix(n+1);
        prefix[0]=gain[0];
        for(int i=1;i<gain.size();i++){
            prefix[i]=prefix[i-1]+gain[i];
        }
        int maxValue = *max_element(prefix.begin(), prefix.end());
        return maxValue;
    }
};