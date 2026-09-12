class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> hash(n + 1, 0);
        //    how many people trust each person
        for (auto t : trust) {
            int person = t[0];
            int judge = t[1];

            hash[judge]++;
        }
        //  the person trusted by n-1 people
        for (int i = 1; i <= n; i++) {

            if (hash[i] == n - 1) {

                // how many people this person trusts
                int count = 0;

                for (auto t : trust) {
                    if (t[0] == i) {
                        count++;
                    }
                }
                //  judge should trust nobody
                if (count == 0) {
                    return i;
                }
            }
        }

        return -1;
    }
};