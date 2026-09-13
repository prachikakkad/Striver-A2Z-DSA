#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {1,2,1,3,5,6,4};

    int n = nums.size();

    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low)/2;

        if(nums[mid] < nums[mid+1]){
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    
    cout << low;
    
    return 0;
}