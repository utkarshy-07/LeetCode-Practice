class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum = 0;
        long long product = 1;
        if (n == 0 ) return 0;
        while(n > 0){
            long long last = n % 10;
            sum = sum + last;
            product = product * last;
            n /= 10;
        }
        return (product-sum);
    }
};