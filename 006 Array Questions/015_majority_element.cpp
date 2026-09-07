#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> nums = {2,2,1,1,1,2,2};

    int n = nums.size();

    int el;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(count == 0){
            el = nums[i];
            count++;
        }
        else if(el == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }

    cout << el;    

    return 0;
}