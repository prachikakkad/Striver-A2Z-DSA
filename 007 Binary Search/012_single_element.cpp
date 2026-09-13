#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int n = nums.size();

    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low)/2;

        if(mid % 2 != 0) mid--;

        if(nums[mid] == nums[mid+1]){
            low = mid + 2;
        }
        else {
            high = mid;
        }
    }
    
    cout << low;
    
    return 0;
}