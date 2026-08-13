class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int count = 0;
        for (int i = 0 ; i < n ; i++){
            int curr = nums[i];
            while(curr > 0){
                int last = curr % 10;
                 if(last == digit) count++;
                 curr = curr/10;
            }
        }
        return count;
    }
};