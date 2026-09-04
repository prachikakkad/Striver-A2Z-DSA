#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {0, 1, 2, 4, 5, 6};
    int n = nums.size();
    // int sum = 0;

    // for(int i = 0; i < n; i++){
    //     sum = sum + nums[i];
    // }

    // int by_formula = (n * (n+1))/2;

    // cout << by_formula - sum;

    // Approach 2 :
    int a = 0;

    for(int i = 0; i < n; i++){
        a = a ^ i ^ nums[i];
    }

    a = a ^ n;
    cout << a;
    return 0;
}