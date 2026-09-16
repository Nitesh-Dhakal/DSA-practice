class Solution {
public:
    int helper(int i, int j, string& s, string& p, vector<vector<int>>& memo) {
        if (i == s.size() || j == p.size())
            return 0;
        if (memo[i][j] != -1)
            return memo[i][j];
        if (s[i] == p[j]) {
            memo[i][j] = 1 + helper(i + 1, j + 1, s, p, memo);
        } else {
            int t1 = helper(i + 1, j, s, p, memo);
            int t2 = helper(i, j + 1, s, p, memo);
            memo[i][j] = max(t1, t2);
        }
        return memo[i][j];
    }
    int longestPalindromeSubseq(string s) {
        string p = "";
        for (int i = s.size() -1; i >= 0; i--) {
            p.push_back(s[i]);
        }
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n + 1, -1));
        return helper(0, 0, s, p, memo);
    }
};