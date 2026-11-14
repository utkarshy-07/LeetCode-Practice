class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            sort(grid[i].begin(), grid[i].end());
        }
        int ans = 0;
        for (int j = m - 1; j >= 0; j--) {
            int mx = 0;
            for (int i = 0; i < n; i++) {
                mx = max(mx, grid[i][j]);
            }
            ans += mx;
        }
        return ans;
    }
};