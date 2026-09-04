#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(33);
    vec.push_back(45);
    vec.push_back(18);
    vec.push_back(7);
    

    int maxx = vec[0];
    for(int x : vec){
        if(x > maxx){
            maxx = x;
        }
    }

    cout << "Largest element is : " << maxx;


    return 0;
}