class Solution {
public:
    static bool cmp(const int& a, const int& b) {
        if ((a % 2) != (b % 2))
            return a % 2 == 0;
        return false;
    }
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        // for(auto v:nums)cout<<v<<" ";
        int n = nums.size();
        int j = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] % 2 != 0) {
                swap(nums[i], nums[j]);
                j += 2;
            }
        }
        return nums;
    }
};