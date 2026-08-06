class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for (int i = 0; i <= rowIndex; i++) {
            vector<int> old(i + 1, 1);
            for (int j = 1; j < i; j++) {
                old[j] = ans[j - 1] + ans[j];
            }
            ans = old;
        }
        return ans;
    }
};