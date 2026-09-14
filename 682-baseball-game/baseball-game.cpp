class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (string str : operations) {
            if (str == "C") {
                record.pop_back();
            } else if (str == "D") {
                record.push_back(2 * record[record.size() - 1]);
            } else if (str == "+") {
                int n = record.size();
                record.push_back(record[n - 1] + record[n - 2]);
            } else {
                record.push_back(stoi(str));
            }
        }
        int ans = 0;
        for (int i = 0; i < record.size(); i++) {
            ans += record[i];
        }
        return ans;
    }
};