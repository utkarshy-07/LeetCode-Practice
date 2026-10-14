class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            int left_sum = 0;
            int right_sum = 0;
            for (int j = 0; j <= i; j++) {
                left_sum += nums[j];
            }
            for (int j = i + 1; j < n; j++) {
                right_sum += nums[j];
            }
            if (abs(left_sum - right_sum) % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};