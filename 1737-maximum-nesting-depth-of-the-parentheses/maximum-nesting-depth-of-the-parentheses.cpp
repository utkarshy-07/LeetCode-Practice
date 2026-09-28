class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int cnt = 0;
        int new_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                cnt++;
                new_cnt = max(new_cnt, cnt);
            } else if (s[i] == ')') {
                cnt--;
            }
        }
        return new_cnt;
    }
};