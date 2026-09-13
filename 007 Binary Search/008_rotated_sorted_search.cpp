#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {4,5,6,7,0,1,2};

    int n = nums.size(), ans = -1, target = 0;

    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
        mid = low + (high - low)/2;

        if(nums[mid] == target){
            ans = mid;
            break;
        }

        else if(nums[low] <= nums[mid]){
            if((nums[low] <= target) && (target < nums[mid])){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        else{
            if((nums[mid] < target) && (target <= nums[high])){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    cout << ans;
   
    return 0;
}