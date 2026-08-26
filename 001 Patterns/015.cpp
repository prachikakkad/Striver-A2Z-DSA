// For n=5;
// ABCDE
// ABCD
// ABC
// AB
// A

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

        for (int j = 0; j < n-i; j++)
        {
            cout << x;
            x++;
        }

        cout << endl;
    }

    return 0;
}