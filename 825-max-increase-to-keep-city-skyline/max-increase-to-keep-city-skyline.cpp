class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
             int n = grid.size();
             vector<int> row(n,0);
             vector<int> col(n,0);
             int ans=0;
             for(int i = 0 ;i < n; i++){
                int mx=0;
                for(int j = 0 ; j < n;j++){
                    //row[i]=max(grid[i],grid[i][j]);
                 mx=max(mx,grid[i][j]);
                }
                row[i]=mx;
             }
            for(int j =0 ; j < n;j++){
            int mx1 =0;
            for(int i = 0 ; i < n ;i++){
                mx1 = max(mx1,grid[i][j]);
               }
               col[j]=mx1;
             } 
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += min(row[i], col[j]) - grid[i][j];
            }
        }
        return ans;                        
    }
}; 