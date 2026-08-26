// For n=5;
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x = 'A';

        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--)
        {
            cout << x;
            x++;
        }

        for (char j = x; j >= 'A'; j--)
        {
            cout << j;
        }
        
        cout << endl;

    }

    return 0;
}