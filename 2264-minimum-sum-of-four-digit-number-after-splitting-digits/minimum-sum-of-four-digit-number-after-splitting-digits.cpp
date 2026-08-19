class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        while (num > 0) {
            ans.push_back(num % 10);
            num /= 10;
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        int new1 = ans[0] * 10 + ans[3];
        int new2 = ans[1] * 10 + ans[2];
        return new1 + new2;
    }
};