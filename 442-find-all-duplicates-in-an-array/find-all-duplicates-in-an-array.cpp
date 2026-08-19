class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            int current = abs(nums[i]);
            int idx = current - 1;
                if(nums[idx] > 0){
                    nums[idx] = - nums[idx];
                }else{
                    ans.push_back(current);
                }
            }
        return ans;
    }
};