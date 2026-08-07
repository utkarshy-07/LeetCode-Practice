class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      int count = 0;
      int n = nums.size();
      for(int i = 0 ; i < n;i++){
        int rem = (nums[i] % 3);
        count += min( rem , 3 - rem);
        }
        return count;
    }
};