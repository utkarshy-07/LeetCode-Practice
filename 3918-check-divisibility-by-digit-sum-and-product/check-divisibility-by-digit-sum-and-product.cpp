class Solution {
public:
    bool checkDivisibility(int n) {
        int org  = n ;
        long long sum = 0;
        long long product = 1;
        while( n != 0){
            int last = n % 10;
            sum += last;
            product *= last;
            n /= 10;
        }
        int ans = sum + product;
        if(org % ans == 0) return true;
        else return false;
    }
};