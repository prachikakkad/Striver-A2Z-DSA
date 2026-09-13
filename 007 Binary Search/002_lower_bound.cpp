#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {1,2,2,3};
    int x = 2;

    int n = nums.size();

    int low = 0, high = n - 1, ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else if(nums[mid] < x){
            low = mid + 1;
        }
    }
    
    cout << ans;
    
    return 0;
}