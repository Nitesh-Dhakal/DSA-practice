class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> imp(jewels.begin(), jewels.end());
        int count =0;
        for(char c : stones){
            if(imp.find(c) != imp.end()){
                count++;
            }
        }
        return {count};
    }
};