// For n=5;
// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x = 'A';

        for (int j = 0; j <= i; j++)
        {
            cout << x;
            x++;
        }

        cout << endl;
    }

    return 0;
}