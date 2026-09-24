class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n * n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }
        int rep = INT_MIN;
        int miss = INT_MIN;
        for (int i = 1; i <= n * n; i++) {
            if (freq[i] == 2)
                rep = i;
            if (freq[i] == 0)
                miss = i;
        }
        return {rep, miss};
    }
};