class Solution {
public:
    bool canAliceWin(int n) {
      int num = 10 , move = 0;
      while(n >= num){
        n -= num--;
        move++;
      }
      return move % 2 == 1;
    }
};