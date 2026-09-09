class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        for (int x : nums) {
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        int count = 0;
        for (int x : nums) {
            if (x > mini && x < maxi)
                count++;
        }
        return count;
    }
};