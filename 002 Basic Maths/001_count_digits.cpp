#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int c = 0;

    while (n > 0)
    {
        c = c + 1;
        n = n/10;
    }
    
    cout << "The number of digits are : " << c;

    return 0;
}