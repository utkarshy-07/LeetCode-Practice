class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evenSum = 0;
        int oddSum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            if(i % 2 == 0){
                evenSum +=nums[i];
            }else{
                oddSum +=nums[i];
            }
        }
        return (evenSum - oddSum);
    }
};