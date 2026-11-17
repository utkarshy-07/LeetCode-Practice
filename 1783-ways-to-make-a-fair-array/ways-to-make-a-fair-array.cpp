class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int even = 0, odd = 0;
        int leftEven = 0, leftOdd = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                even += nums[i];
            else
                odd += nums[i];
        }
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                even -= nums[i];
            else
                odd -= nums[i];
            if(leftEven + odd == leftOdd + even)
                ans++;
            if(i % 2 == 0)
                leftEven += nums[i];
            else
                leftOdd += nums[i];
        }
        return ans;
    }
};