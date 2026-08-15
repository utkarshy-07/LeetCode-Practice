class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> tz(n, 0);

        // count zero in each row
        int i = 0;
        while (i < n) {
            int zeroCount = 0;
            int j = n - 1;

            while (j >= 0 && grid[i][j] == 0) {
                zeroCount++;
                j--;
            }

            tz[i] = zeroCount;
            i++;
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int tar = n - 1 - i;

            // check for closest row satisfying requirement
            int j = i;

            while (j < n && tz[j] < tar) {
                j++;
            }

            // if no row satisfies requirement
            if (j == n)
                return -1;

            // move the row upward
            while (j > i) {
                swap(tz[j], tz[j - 1]);
                ans++;
                j--;
            }
        }
        return ans;
    }
};