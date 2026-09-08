#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    vector<int> nums = {2,3,-2,4};
    int n = nums.size();
    int prefix = 1, suffix = 1, ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix = prefix * nums[i];
        suffix = suffix * nums[n - 1 - i]; 
        ans = max({ans, prefix, suffix});

    }
    
    cout << ans;

    return 0;
}