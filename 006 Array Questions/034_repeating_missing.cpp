#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    vector<int> nums = {3, 5, 4, 1, 1}, ans;
    unordered_map<int, int> m;

    int n = nums.size(), rep = -1;

    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
        if (m[nums[i]] > 1) {
            rep = nums[i]; 
        }
    }

    int a = 0;

    for(int i = 0; i < n; i++){
        a = a ^ (i+1) ^ nums[i];
    }

    a = a ^ rep;

    ans.push_back(rep);
    ans.push_back(a);

    return 0;
}