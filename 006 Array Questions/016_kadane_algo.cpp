#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int maxx = INT_MIN;
    int n = nums.size(), left = 0, sum = 0;

    for(int right = 0; right < n; right++){

        sum = sum + nums[right];
        maxx = max(maxx, sum);

        if(sum < 0){
            sum = 0;
            left = right + 1;
        }
    }

    cout << maxx;

    return 0;
}