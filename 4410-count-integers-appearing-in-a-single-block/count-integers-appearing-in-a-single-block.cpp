class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count[101] = {0};
        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                count[nums[i]]++;
            }
        }
        int ans = 0;
        for (int i = 1; i <= 100; i++) {
            if (count[i] == 1) {
                ans++;
            }
        }
        return ans;
    }
};