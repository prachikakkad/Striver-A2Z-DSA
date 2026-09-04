#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(7);
    vec.push_back(18);
    vec.push_back(33);
    vec.push_back(45);

    int n = vec.size();
    int k = 2;
    k = k % n;

    reverse(vec.begin(), vec.end());
    reverse(vec.begin(), vec.begin() + k);
    reverse(vec.begin() + k, vec.end());
    
    
    for(int x : vec){
        cout << x << " ";
    }

    return 0;
}