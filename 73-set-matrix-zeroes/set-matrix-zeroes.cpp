class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();

        int flag = -999999;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (matrix[i][j] == 0){
                    // Left
                    for(int k = 0; k < j; k++){
                        if(matrix[i][k] != 0)
                         matrix[i][k] = flag;
                    }
                    // Right
                    for(int k = j + 1; k < m; k++){
                        if(matrix[i][k] != 0) 
                        matrix[i][k] = flag;
                    }
                    // Up
                    for(int k = 0; k < i; k++){
                        if(matrix[k][j] != 0) 
                        matrix[k][j] = flag;
                    }
                    // Down
                    for(int k = i + 1; k < n; k++){
                        if(matrix[k][j] != 0)
                         matrix[k][j] = flag;
                    }
                }
            }
        }
        // make zeross
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == flag){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};