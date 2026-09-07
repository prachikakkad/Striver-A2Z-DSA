#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    vector<int> nums = {1, 2, 5, 3, 1, 2}, ans;
    int n = nums.size(), maxx = INT_MIN;

    for(int i = n-1; i >= 0; i--){
        if(nums[i] > maxx){
            ans.push_back(nums[i]);
            maxx = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}