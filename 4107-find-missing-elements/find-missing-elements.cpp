class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n;i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        for (int i = mn; i <= mx; i++) {
            bool found = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = 1;
                    break;
                }
            }
            if (found == 0)
                ans.push_back(i);
        }
        return ans;
    }
};