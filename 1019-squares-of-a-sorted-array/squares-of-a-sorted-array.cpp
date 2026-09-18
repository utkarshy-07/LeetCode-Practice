class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // || in O(nlogn) ||
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        // }
        // ||  in O(N) ||
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int current = n - 1;
        while (left <= right) {
            int square1 = nums[left] * nums[left];
            int square2 = nums[right] * nums[right];
            if (square1 > square2) {
                ans[current] = square1;
                left++;
            } else {
                ans[current] = square2;
                right--;
            }
            current--;
        }

        return ans;
    }
};