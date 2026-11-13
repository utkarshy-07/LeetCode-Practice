class Solution {
public:
    int maxDistinct(string s) {
        int ans = 0;
        bool found[26] = {false};
        for (char c : s) {
            if (!found[c - 'a']) {
                found[c - 'a'] = true;
                ans++;
            }
        }
        return ans;
    }
};