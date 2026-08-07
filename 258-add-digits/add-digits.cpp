class Solution {
public:
    int solve(int x){
        if(x < 10){ 
        return x;
        }
        int sum = 0;
        while(x != 0){
        int last = x % 10;
        sum = sum + last;
        x /= 10;
        } 
        x=sum;
        return solve(x);
    }
    int addDigits(int num) {
        if(num >= 10) return solve(num);
         return num;
    }
};