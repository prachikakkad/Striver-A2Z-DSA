#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int f = 1;

    for(int i=2; i<=n/2; i++){
        if (n%i==0)
        {
            f = 0;
            break;
        }
    }

    if (f == 1)
    {
        cout << "It is prime";
    }
    else{
        cout << "It is NOT prime";
    }
    
    return 0;
}