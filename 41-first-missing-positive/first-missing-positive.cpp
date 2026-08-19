class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n = nums.size();
      bool flag = 0 ; 
      for(int i = 0 ; i < n ; i++){
        if(nums[i] == 1){
            flag = 1;
            break;
        }
      }
      if(flag == 0) return 1;
      for(int i = 0 ; i < n ; i++){
        if(nums[i] <= 0 || nums[i] > n){
            nums[i] = 1;
        }
      }
      for(int i = 0 ; i < n ; i++){
        int curr = abs(nums[i]);
        int idx = curr - 1;
        if(nums[idx] > 0){
            nums[idx] = -nums[idx];
        }
      }
      for(int i = 0 ; i < n ; i++){
        if(nums[i] > 0){
            return i+1;
        }
      }
      return n+1;
    }
};