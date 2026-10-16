class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        int prefix_sum = 0;
        mp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i];
            int diff = prefix_sum - k;
            if (mp.find(diff) != mp.end()) {
                count += mp[diff];
            }
            mp[prefix_sum]++;
        }
        return count;
    }
};