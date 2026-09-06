class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
    int n = matrix[0].size();
    
    vector<bool> row_check(m, false), col_check(n, false);


    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row_check[i] = true;
                col_check[j] = true;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (row_check[i] || col_check[j]){
                matrix[i][j] = 0;
            }
        }
    }
    }
};