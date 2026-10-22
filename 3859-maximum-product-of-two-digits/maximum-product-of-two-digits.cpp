class Solution {
public:
    int maxProduct(int n) {
        int digit_1 = 0 , digit_2 = 0;
        while(n > 0){
            int last = n % 10;
            if(last >= digit_1){
                digit_2 = digit_1;
                digit_1 = last;
            }else if(last > digit_2){
                digit_2 = last;
            }
            n /= 10;
        }
        return (digit_1 * digit_2);
    }
};