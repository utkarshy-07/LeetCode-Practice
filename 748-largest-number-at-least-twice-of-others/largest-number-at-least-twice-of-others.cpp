class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = INT_MIN;
        int second = INT_MIN;
        int idx = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > mx) {
                second = mx;
                mx = nums[i];
                idx = i;
            } else if (nums[i] > second) {
                second = nums[i];
            }
        }
        if (mx >= 2 * second) return idx;
        else return -1;
    }
};