class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row;
        int col;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    row = i;
                    col = j;
                }
            }
        }
        int ans = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for (int k = 0; k < 4; k++) {
            int i = row + dr[k];
            int j = col + dc[k];
            while (i >= 0 && i < 8 && j >= 0 && j < 8) {
                if (board[i][j] == 'B') {
                    break;
                }
                if (board[i][j] == 'p') {
                    ans++;
                    break;
                }
                i += dr[k];
                j += dc[k];
            }
        }
        return ans;
    }
};