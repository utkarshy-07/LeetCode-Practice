class Solution {
public:
    int n , m ;
    vector<int> dx={0,0,1,-1,1,1,-1,-1};
    vector<int> dy={1,-1,0,0,1,-1,1,-1};
    bool check(int a,int b){
        if(a>=0&&a<n&&b>=0&&b<m)return true;
        return false;
    }
    void gameOfLife(vector<vector<int>>& board) {
    int n = board.size();
    int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int live = 0;

                for (int d = 0 ; d < 8 ; d++) {
                    int nx = i + dx[d];
                    int ny = j + dy[d];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                        if (board[nx][ny] == 1 || board[nx][ny] == 2)
                            live++;
                    }
                }
                if (board[i][j] == 1) {
                    if (live < 2 || live > 3)
                        board[i][j] = 2;      // alive -> dead
                }
                else {
                    if(live == 3)
                        board[i][j] = 3;      // dead -> alive
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 2)
                    board[i][j] = 0;
                else if (board[i][j] == 3)
                    board[i][j] = 1;
            }
        }
    }
};