class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int count[1001] = {0};
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < nums[i].size(); j++){
                count[nums[i][j]]++;
            }
        }
        vector<int> ans;
        for(int i = 0; i < 1001; i++){
            if(count[i]==n){
                ans.push_back(i);
            }
        }
        return ans;
    }
};