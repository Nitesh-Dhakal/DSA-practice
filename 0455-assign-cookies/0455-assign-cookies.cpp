class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = max(s.size(), g.size());
        int left = 0;
        int count = 0;
        int right = 0;
        while (n >= 0) {
            if (left < g.size() && right < s.size()) {
                if (g[left] <= s[right]) {
                    count++;
                    left++;
                    right++;
                    n--;
                } else {
                    right++;
                    n--;
                }
            }
            else break;
        }
        return count;
    }
};