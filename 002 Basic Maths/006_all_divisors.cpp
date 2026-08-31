#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    vector<int> vec;

    for(int i=1; i<=n; i++){
        if (n%i == 0)
        {
            vec.push_back(i);
        }
    }

    return 0;
}