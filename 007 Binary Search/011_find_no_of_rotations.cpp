#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};

    int n = nums.size();
    int ans = 0;

    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
        mid = low + (high - low)/2;

        if(nums[mid] <= nums[high]){
            ans = mid;
            high = mid - 1;
        }

        else{
                low = mid + 1;
        }
    }

    cout << ans;
   
    return 0;
}