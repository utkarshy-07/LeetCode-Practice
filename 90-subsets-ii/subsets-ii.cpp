class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        set<vector<int>> Subsets;
        int n = nums.size();
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            Subsets.insert(subset);
        }
        
        return vector<vector<int>>(Subsets.begin(), Subsets.end());
    }
};