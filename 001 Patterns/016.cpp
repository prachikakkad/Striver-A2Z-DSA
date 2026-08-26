// For n=5;
// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    char x = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << x;
        }
        x++;
        cout << endl;
    }

    return 0;
}