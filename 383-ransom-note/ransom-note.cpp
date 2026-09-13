class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26,0);
        for(char x : magazine){
            count[x -'a']++;
        }
        for(char x : ransomNote){
            count[x - 'a']--;
            if(count[x - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};