#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {3,4,4,7,8,10};
    int x = 5;

    int n = nums.size();

    int low = 0, high = n - 1, floor = -1, ceil = -1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] >= x){
            ceil = nums[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] <= x){
            floor = nums[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    cout << floor << " " << ceil;
    
    return 0;
}