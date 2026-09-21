class Solution {
public:
    void Reverse(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        Reverse(nums, 0, n - 1);
        Reverse(nums, 0, k - 1);
        Reverse(nums, k, n - 1);
    }
};