class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long mx1 = LLONG_MIN;
        long long mx2 = LLONG_MIN;
        long long mx3 = LLONG_MIN;
        for (int x : nums) {
            if (x == mx1 || x == mx2 || x == mx3)
                continue;
            if (x > mx1) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = x;
            } else if (x > mx2) {
                mx3 = mx2;
                mx2 = x;
            } else if(x > mx3) {
                mx3 = x;
            }
        }
        if (mx3 == LLONG_MIN) {
            return mx1;
        }
        return mx3;
    }
};