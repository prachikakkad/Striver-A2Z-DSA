#include <iostream>

using namespace std;

int NumbersSum(int N)
{
    if (N == 0)
    {
        return 0;
    }
    return N + NumbersSum(N - 1);
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Sum : " << NumbersSum(n);

    return 0;
}