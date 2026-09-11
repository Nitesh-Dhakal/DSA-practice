class Solution {
public:
    int totalNumbers(vector<int>& num) {
        vector<int> freq(10, 0);
        for (int digit : num) {
            freq[digit]++;
        } 
        int total=0;
        for (int i = 100; i <= 998; i += 2) {
           
            int hundred = i / 100;
            int tens = (i / 10) % 10;
            int ones = i % 10;
            freq[hundred]--;
            freq[tens]--;
            freq[ones]--;
            if (freq[hundred] >= 0 && freq[tens] >= 0 && freq[ones] >= 0) {
               total++;
            }
            freq[hundred]++;
            freq[tens]++;
            freq[ones]++;
        }
        return total;
    }
};