#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {3, 1, -2, -5, 2, -4};
    int n = nums.size(), pos = 0, neg = 1;
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        if(nums[i] > 0) {
            ans[pos] = nums[i];
            pos = pos + 2;
        }
        else{
            ans[neg] = nums[i];
            neg = neg + 2;
        }
    }

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}