class Solution {
public:
    int getSum(int x) {
        int sum = 0;
        while (x > 0) {
            int last = x % 10;
            sum += last * last;
            x /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        } while (slow != fast);
        if (slow == 1)
            return true;

        return false;
    }
};