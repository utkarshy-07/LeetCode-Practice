class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        int sum = 0;
        int count = 0;
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             int sum = 0;
             int count = 0;
            sum += img[i][j];
            count++;
                
                if (i > 0) {
                    sum += img[i - 1][j];
                    count++;
                }
            

                if (i < n - 1) {
                    sum += img[i + 1][j];
                    count++;
                }
               

                if (j > 0) {
                    sum += img[i][j - 1];
                    count++;
                }
             

                if (j < m - 1) {
                    sum += img[i][j + 1];
                    count++;
                }
            

                if (i > 0 && j > 0) {
                    sum += img[i - 1][j - 1];
                    count++;
                }
         
                if (i > 0 && j < m - 1) {
                    sum += img[i - 1][j + 1];
                    count++;
                }
             

                if (i < n - 1 && j > 0) {
                    sum += img[i + 1][j - 1];
                    count++;
                }
         

                if (i < n - 1 && j < m - 1) {
                    sum += img[i + 1][j + 1];
                    count++;
                }
                ans[i][j] = sum / count;
            }
        }
    return ans;
    }
};