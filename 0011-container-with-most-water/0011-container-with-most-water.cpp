class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int last = height.size()-1;
        int max_water = 0;
        int water = 0;
        while (first<last){ 
            int walls_bw = last-first;
            if(height[first]>height[last]){
                 water = walls_bw * height[last];
                 last --;
            }
            else{
                 water = walls_bw * height[first];
                 first++;
            }
            if(water>max_water){
                max_water=water;
            }
            
        }
        return max_water;
    }
};