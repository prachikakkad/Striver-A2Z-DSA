#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> nums = {10, 5, 2, 7, 1, 9};

    int k = 15, n = nums.size();
    int left = 0, ans = 0, maxx = 0;

    for (int right = 0; right < n; right++)
    {
        // add nums[right] to window state
        ans = ans + nums[right];

        while (ans > k)
        {
            // remove nums[left] from window state
            ans = ans - nums[left];
            left++;
        }
        if(ans == k){
            maxx = max(maxx, right - left + 1);
        }
    }

    cout << maxx;

    return 0;
}