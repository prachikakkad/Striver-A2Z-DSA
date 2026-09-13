#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {5,7,7,8,8,10}, result;
    int target = 8;

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
    
    result.push_back(start);
    result.push_back(end);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}