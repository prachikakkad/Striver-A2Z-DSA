#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> nums = {3,2,4}, ans;

    int n = nums.size(), target = 6;

    int left = 0, right = n-1, sum = 0;

    vector<pair<int, int>> pairedNums(n);

    for (int i = 0; i < n; i++) {
        pairedNums[i] = {nums[i], i};
    }

    sort(pairedNums.begin(), pairedNums.end());

    while (left < right)
    {
        sum = pairedNums[left].first + pairedNums[right].first;
        if (sum == target)
        {
            ans.push_back(pairedNums[left].second);
            ans.push_back(pairedNums[right].second);
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}