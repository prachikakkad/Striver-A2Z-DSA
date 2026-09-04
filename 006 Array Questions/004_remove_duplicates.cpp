#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(7);
    vec.push_back(18);
    vec.push_back(18);
    vec.push_back(33);
    vec.push_back(33);
    vec.push_back(45);

    int n = vec.size();
    int k = 0;

    for(int i = 1; i < n; i++){
        if(vec[i] != vec[k]){
            k++;
            vec[k] = vec[i];
        }
    }

    for(int x : vec){
        cout << x << " ";
    }

    return 0;
}