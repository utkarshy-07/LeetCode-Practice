class Solution {
public:
    int commonFactors(int a, int b) {
         int gcf = gcd(a,b);
         int count = 0;
         for(int i = 1 ; i * i <=gcf ; ++i){
            if(gcf % i == 0){
                count++;
            if(i * i != gcf)
             count++;
            }
        }
        return count;
    }
};