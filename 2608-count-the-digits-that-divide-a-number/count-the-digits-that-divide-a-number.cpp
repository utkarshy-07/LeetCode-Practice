class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int org = num;
            while (org > 0) {
                int last = org % 10;
                if ((num % last) == 0){
                    count++;
                }
                org /= 10;
            }
        return count;
    }
};