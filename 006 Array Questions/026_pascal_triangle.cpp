#include <iostream>
#include <vector>

using namespace std;

int main() {

    int numRows = 4;
    vector<vector<int>> pascal;
    

    for (int i = 0; i < numRows; i++)
    {
        vector<int> temp;

        for (int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i){
                temp.push_back(1);
            }
            else{
                int num = pascal[i-1][j-1] + pascal[i-1][j];
                temp.push_back(num);
            }
        }

        pascal.push_back(temp);

    }

    return 0;
}