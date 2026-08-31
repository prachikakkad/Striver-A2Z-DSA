#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "Enter a number : ";
    cin >> x;

    int rev = 0, rem = 0;
    while (x != 0)
    {
        rem = x % 10;
        rev = (rev * 10) + rem;
        x = x / 10;
    }

    cout << "Reverse Number is : " << rev;

    return 0;
}