#include <iostream>
#include <vector>
#include <unordered_map> 

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 3; 
    int n = nums.size();

    unordered_map<int, int> prefix_sums;
    
    prefix_sums[0] = 1;

    int curr_sum = 0;
    int total_subarrays = 0;

    for (int i = 0; i < n; i++) {
        curr_sum = curr_sum + nums[i]; 

        if (prefix_sums.find(curr_sum - k) != prefix_sums.end()) {
            total_subarrays = total_subarrays + prefix_sums[curr_sum - k];
        }
        
        prefix_sums[curr_sum]++;
    }

    cout << "Total subarrays whose sum equals " << k << ": " << total_subarrays << endl;

    return 0;
}
