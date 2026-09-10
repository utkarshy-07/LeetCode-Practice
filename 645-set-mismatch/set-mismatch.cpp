class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        int dupli = -1, miss = -1;
        for (int x : nums) {
            ans[x]++;
        }
        for (int i = 1; i <= n; i++) {
            if (ans[i] == 2)
                dupli = i;
            else if (ans[i] == 0)
                miss = i;
        }
        return {dupli, miss};
    }
};