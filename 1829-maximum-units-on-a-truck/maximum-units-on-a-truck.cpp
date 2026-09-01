class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[1] > b[1])
            return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        int n = bt.size();
        sort(bt.begin(), bt.end(), cmp);
        int ans = 0;
        for (auto v : bt) {
            int bx = v[0];
            int unit = v[1];
            int tm = min(bx, ts);
            ans += (tm * unit);
            ts -= tm;
            if (ts <= 0)
                break;
        }
        return ans;
    }
};