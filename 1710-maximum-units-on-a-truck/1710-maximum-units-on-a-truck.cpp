class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) { return a[1] > b[1]; }
    int maximumUnits(vector<vector<int>>& box, int sizee) {
        sort(box.begin(), box.end(), compare);
        int result = 0;
        int capacity = sizee;
            for (int i = 0; i < box.size(); i++) {
                if (box[i][0] <= capacity) {
                    result += box[i][0] * box[i][1];
                    capacity -= box[i][0];
                } else{
                    result+=capacity*box[i][1];
                    return result;
                }
            }
        return result;
    }
};