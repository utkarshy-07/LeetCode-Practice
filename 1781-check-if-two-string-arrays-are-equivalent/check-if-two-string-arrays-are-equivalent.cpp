class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size();
        int m = word2.size();
        string S1 = "";
        string S2 = "";
        for(int i = 0 ; i < n ; i++){
            S1 += word1[i];
        }
        for(int j = 0 ; j < m ; j++){
            S2 += word2[j];
        }
        if(S1==S2) return true;
        return false;
    }
};