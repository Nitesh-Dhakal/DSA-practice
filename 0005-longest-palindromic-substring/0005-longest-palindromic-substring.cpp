class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int len = 1;
        int idx = 0;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (i == j) {
                    dp[i][j] = true;
                } else if (j == i + 1) {
                    if (s[i] == s[j]) {
                        dp[i][j] = true;
                    }
                } else {
                    if (s[i] == s[j] && dp[i + 1][j - 1]==true) {
                        dp[i][j] = true;
                    }
                }
                if (dp[i][j] == true) {
                    int currlen = j - i + 1;
                    if (currlen > len) {
                        len = currlen;

                        idx = i;
                    }
                }
            }
        }
        return s.substr(idx, len);
    }
};