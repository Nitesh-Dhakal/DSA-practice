class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;
        int index=0;
        int current=0;
        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
            current+=gas[i] - cost[i];
            if(current<0){
                index=i+1;
                current=0;
            }
        }
        if(totalcost>totalgas)return -1;
        return index;
    }
};