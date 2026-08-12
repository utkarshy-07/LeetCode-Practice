class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > mx)
                mx = max(mx, nums[i]);
            if (nums[i] < mn)
                mn = min(mn, nums[i]);
        }
        return gcd(mn, mx);
    }
};