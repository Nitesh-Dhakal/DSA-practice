class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1]; 
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int arrow=points.size();
        int last=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=last && points[i][1]>=points[i-1][1]){
                arrow--;
            }
            else{
                last=points[i][1];
            }
        }
        return arrow;
    }
};