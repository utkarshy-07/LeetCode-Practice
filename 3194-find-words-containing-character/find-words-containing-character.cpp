class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (char j : words[i]) {
                if (j == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};