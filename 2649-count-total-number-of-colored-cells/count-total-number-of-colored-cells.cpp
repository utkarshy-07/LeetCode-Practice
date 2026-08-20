class Solution {
public:
    long long coloredCells(int n) {
        if(n==1) return 1;
        long long sum = 1 ;
        for(int i = 0; i < n ; i++){
            sum += 4 * i;
        }
        return sum;
    }
};