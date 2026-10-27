class Solution {
public:
    int xorOperation(int n, int start) {
        int next = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans ^ (start + (2 * i));
            next++;
        }
        return ans;
    }
};