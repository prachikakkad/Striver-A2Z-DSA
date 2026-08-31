#include <iostream>

using namespace std;

int main()
{

    int x, temp;
    cout << "Enter a number : ";
    cin >> x;

    temp = x;

    int rev = 0, rem = 0;

    if (x<0)
    {
        cout << "It is NOT a palindrome";
    }
    
    else{
        while (x > 0)
        {
            rem = x % 10;
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        if (rev == temp)
        {
            cout << "It is a palindrome";
        }
        else
        {
            cout << "It is NOT a palindrome";
        }
    }

    return 0;
}