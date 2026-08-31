#include <iostream>
#include <MATH.H>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int c = 0, temp = n;

    while (n > 0)
    {
        c = c + 1;
        n = n/10;
    }

    n = temp;
    int dig = 0, sum = 0;

    while (n>0)
    {
        dig = n % 10;
        sum = sum + (int)round(pow(dig, c));
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "It is an Armstrong number";
    }
    else{
        cout << "It is NOT an Armstrong number";
    }
    
    return 0;
}