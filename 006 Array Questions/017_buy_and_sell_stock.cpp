#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums = {7,1,5,3,6,4};
    int buy = 0, sell = 0, profit = 0, n = nums.size();
    int maxx = 0;

    for(sell = 0; sell < n; sell++){

        profit = nums[sell] - nums[buy];
        maxx = max(maxx, profit);

        cout << profit << endl;

        if(nums[sell] < nums[buy]){
            buy = sell;
        }
    }
    cout << "Buy : " << buy << endl;
    cout << "Sell : " << sell;

    return 0;
}