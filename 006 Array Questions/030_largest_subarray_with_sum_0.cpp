#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

int main() {

    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    unordered_map<int, int> m;
    int prefix_sum = 0, max_len = 0;
    
    int n = arr.size();

    m[0] = 1;

    for(int i = 0; i < n; i++){
        prefix_sum = prefix_sum + arr[i];

        if (prefix_sum == 0) {
            max_len = max(max_len, i + 1);;
        }

        else if (m.find(prefix_sum) != m.end()) {

            int current_len = i - m[prefix_sum];
            max_len = max(max_len, current_len);
        } 
        else {
            m[prefix_sum] = i;
        }
    }

    
    cout << "Length of the longest 0-sum subarray: " << max_len << endl;
    

    return 0;
}