#include <iostream>
#include <vector>

using namespace std;

int main() {

    int ans = 0;
    vector<int> nums = {4, 1, 2, 1, 2};

    for(auto value : nums){
        ans = ans ^ value;
    }

    cout << ans;

    return 0;
}