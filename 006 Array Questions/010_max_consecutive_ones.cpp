#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {1, 0, 1, 1, 1};

    int n = nums.size();
    int maxx = 0, c = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            c++;
        }

        else if(nums[i] == 0){
            c = 0;
        }

        if(c > maxx){
            maxx = c;
        }
    }

    cout << maxx;

    return 0;
}