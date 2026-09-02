class Solution {
public:
    bool checkRecord(string s) {
        int cnt1 = 0;
        int cnt2 = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                cnt1++;
                cnt2 = 0;
            } else if (s[i] == 'L') {
                cnt2++;
                if (cnt2 >= 3)
                    return false;
            } else {
                cnt2 = 0;
            }
        }
        if (cnt1 >= 2)
            return false;
        return true;
    }
};