#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = matrix.size();
    int n = matrix[0].size();

    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}