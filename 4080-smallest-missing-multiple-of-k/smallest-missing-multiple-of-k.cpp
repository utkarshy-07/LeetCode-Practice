class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool> ans(101);
        int n = nums.size();
        for(int& num : nums){
            ans[num] = true;
        }
        int num = k ;
        while(num < 101){
            if(!ans[num]){
                return num;
            }
            num += k;
        }
        return num;
    }
};