class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = nums.size() - 1;
        int cnt = 0;
        while (st < end) {
            if (nums[st] + nums[end] < target) {
                cnt += end - st;
                st++;
            } else {
                end--;
            }
        }
        return cnt;
    }
};