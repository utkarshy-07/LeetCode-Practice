class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int count = 0 ; 
        int n = piles.size() / 3 ;
        for(int i = n; i < piles.size() ; i+= 2){
            count += piles[i];
        }
        return count;
    }
};