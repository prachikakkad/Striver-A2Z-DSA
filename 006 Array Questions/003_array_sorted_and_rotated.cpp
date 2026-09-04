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

    int x = 0;
    

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > vec[(i+1)%(vec.size())]){
            x++;
        }
    }

    if(x == 0 || x == 1) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}