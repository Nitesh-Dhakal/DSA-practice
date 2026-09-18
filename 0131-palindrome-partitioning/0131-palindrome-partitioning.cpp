class Solution {
public:
    void helper(string& s, int start, vector<vector<string>>& result,
                vector<string>& letters, vector<vector<bool>>& dp) {
        if (start == s.size()) {
            result.push_back(letters);
            return;
        }
        for (int end = start; end < s.size(); end++) {
            if (dp[start][end] == true) {
                letters.push_back(s.substr(start, -start + end + 1));
                helper(s, end + 1, result, letters, dp);
                letters.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (i == j) {
                    dp[i][j] = true;
                } else if (j == i + 1) {
                    if (s[i] == s[j]) {
                        dp[i][j] = true;
                    }
                } else {
                    if (s[i] == s[j] && dp[i + 1][j - 1] == true) {
                        dp[i][j] = true;
                    }
                }
            }
        }
        vector<vector<string>> result;
        vector<string> letters;
        helper(s, 0, result, letters, dp);
        return result;
    }
};