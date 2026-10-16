class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int zero = 0, one = 0, res = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero++;
            } else {
                one++;
            }
            int diff = one - zero;
            if (mp.find(diff) == mp.end()) {
                mp[diff] = i;
            }
            if (one == zero) {
                res = one + zero;
            } else {
                res = max(res, i - mp[diff]);
            }
        }
        return res;
    }
};