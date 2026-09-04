#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(7);
    vec.push_back(18);
    vec.push_back(63);
    vec.push_back(33);
    vec.push_back(45);


    int target = 33;
    int t = 0;
    int n = vec.size();

    for(int i = 0; i < n; i++){
        if(vec[i] == target){
            cout << "First occurence of target is at index : " << i;
            t = 1;
            break;
        }
    }

    if(t == 0){
        cout << "Target doesn't exist !!";
    }

    return 0;
}