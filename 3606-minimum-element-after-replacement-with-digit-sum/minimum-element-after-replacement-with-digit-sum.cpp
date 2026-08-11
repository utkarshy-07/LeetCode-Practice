class Solution {
public:
    int solve(int x) {
        int sum = 0;
        x = abs(x);
        while (x > 0) {
            int last = x % 10;
            x /= 10;
            sum += last;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            mini = min(mini, solve(nums[i]));
        }
        return mini;
    }
};