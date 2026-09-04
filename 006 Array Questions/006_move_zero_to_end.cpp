#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(7);
    vec.push_back(0);
    vec.push_back(18);
    vec.push_back(0);
    vec.push_back(33);
    vec.push_back(0);
    vec.push_back(45);

    int n = vec.size();
    int p = 0;

    for(int i = 0; i < n; i++){
        if(vec[i] != 0){
            swap(vec[i], vec[p]);
            p++;
        }
    }
    
    for(int x : vec){
        cout << x << " ";
    }

    return 0;
}