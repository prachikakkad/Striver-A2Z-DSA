#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {1,3,5,6};
    int target = 7;

    int n = nums.size();

    int low = 0, high = n - 1, ans = n;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
    }
    
    cout << ans;
    
    return 0;
}