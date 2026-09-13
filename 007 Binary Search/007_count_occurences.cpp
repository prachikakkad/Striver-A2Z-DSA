#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {0, 0, 1, 1, 1, 2, 3};
    int target = 1, ans = 0;

    int n = nums.size();

    int low = 0, high = n - 1, start = -1, end = -1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            start = mid;
            high = mid - 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            end = mid;
            low = mid + 1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(start != -1){
        ans = end - start + 1;
    }

    return 0;
}