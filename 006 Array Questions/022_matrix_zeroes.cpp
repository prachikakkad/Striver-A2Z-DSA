#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
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

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}