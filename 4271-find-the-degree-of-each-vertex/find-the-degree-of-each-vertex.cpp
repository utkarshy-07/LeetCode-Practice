class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int>degree;
        for(int i = 0 ; i < n ; i++){
            int sum = 0 ;
            for(int j = 0 ; j < n ; j++){
                sum += matrix[i][j];
            }
            degree.push_back(sum);
        }
        return degree;
    }
};