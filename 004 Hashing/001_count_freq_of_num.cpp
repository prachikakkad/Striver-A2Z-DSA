#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    vector<vector<int>> vec;
    int n = nums.size();

    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[nums[i]]++;
    }

    for (auto it : um)
    {
        vec.push_back({it.first, it.second});
    }
    return vec;
}

int main(){

    vector<int> vec = {3, 1, 3, 4, 3, 4, 2, 6};

    vector<vector<int>> result = countFrequencies(vec);

    for(auto it : result){
        cout << it[0] << " -> " << it[1] << endl;
    }

    
    return 0;
}