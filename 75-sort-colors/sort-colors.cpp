class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                cnt1++;
            else if (nums[i] == 1)
                cnt2++;
            else
                cnt3++;
        }
        int idx = 0;
        while (cnt1 > 0) {
            nums[idx] = 0;
            cnt1--;
            idx++;
        }
        while (cnt2 > 0) {
            nums[idx] = 1;
            cnt2--;
            idx++;
        }
        while (cnt3 > 0) {
            nums[idx] = 2;
            cnt3--;
            idx++;
        }
    }
};