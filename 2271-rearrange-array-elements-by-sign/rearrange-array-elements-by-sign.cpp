class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos_Idx = 0;
        int neg_Idx = 1;
        for(int num : nums) {
            if(num > 0) {
                ans[pos_Idx] = num ;
                pos_Idx += 2;
            }else{
                ans[neg_Idx] = num ;
                neg_Idx += 2;
            }
        }
        return ans;
    }
};