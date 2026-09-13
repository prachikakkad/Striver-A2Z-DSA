#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    int n = nums.size();

    int low = 0, high = n - 1, ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            ans = mid;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    cout << ans;
    
    return 0;
}