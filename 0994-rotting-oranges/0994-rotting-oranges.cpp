class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fresh = 0;
        int minutes = 0;

        int rows = grid.size();
        int cols = grid[0].size();

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    fresh++;
                }
            }
        }

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (q.size() > 0 && fresh > 0) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                for (int d = 0; d < 4; d++) {
                    int nr = r + dirs[d][0];
                    int nc = c + dirs[d][1];

                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                        grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
            }
            minutes++;
        }

        if (fresh > 0) {
            return -1;
        }

        return minutes;
    }
};