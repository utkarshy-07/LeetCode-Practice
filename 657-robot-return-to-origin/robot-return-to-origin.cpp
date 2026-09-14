class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0, down = 0, left = 0;
        int right = 0;
        for (char ch : moves) {
            if (ch == 'U')
                up++;
            else if (ch == 'D')
                down++;
            else if (ch == 'L')
                left++;
            else
                right++;
        }
        return (up == down) && (left == right);
    }
};