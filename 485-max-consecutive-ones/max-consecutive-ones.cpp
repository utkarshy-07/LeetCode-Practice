class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mx_cnt = 0 ;
        int cnt = 0;
        for(int i  = 0 ; i < n ; i++){
            if(nums[i] == 1){
                cnt++;
                mx_cnt = max(mx_cnt,cnt);
            }else{
                cnt = 0;
            }
        }
        return mx_cnt;
    }
};