class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    bool found = false;
                    // check right
                    for (int k = j + 1; k < m; k++) {
                        if (grid[i][k] == 1) {
                            found = true;
                            break;
                        }
                    }
                    // check down
                    for (int k = i + 1; k < n; k++) {
                        if (grid[k][j] == 1) {
                            found = true;
                            break;
                        }
                    }
                    // check left
                    for (int k = 0; k < j; k++) {
                        if (grid[i][k] == 1) {
                            found = true;
                            break;
                        }
                    }
                    // check up
                    for (int k = 0; k < i; k++) {
                        if (grid[k][j] == 1) {
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};