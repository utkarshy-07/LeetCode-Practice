class Solution {
public:
    bool isPrime(int k) {
        if(k < 2) return false;
        if(k == 2 || k == 3) return true;
        if(k % 2 == 0 || k % 3 == 0) return false;
        for(int i = 5; i * i <= k; i += 6){
            if(k % i == 0 || k % (i + 2) == 0) return false;
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        if(n % 2 != 0){
            if(isPrime(n - 2)){
                ans.push_back({2, n - 2});
            }
            return ans;
        }
        for(int x = 2; x <= n / 2; ++x){
            int y = n - x;
            if(isPrime(x) && isPrime(y)){
                ans.push_back({x, y});
            }
        }
        return ans;
    }
};