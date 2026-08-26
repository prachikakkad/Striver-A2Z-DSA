// For n=5;
// E 
// D E 
// C D E 
// B C D E 
// A B C D E

#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x = n + 64 - i;

        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }

        cout << endl;
    }

    return 0;
}