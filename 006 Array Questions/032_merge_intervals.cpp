#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}}, ans;

    int n = intervals.size();

    sort(intervals.begin(), intervals.end());

    for(int i = 0; i < n; i++){
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]); 
        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }

    for (auto interval : ans) {
        cout << "[" << interval[0] << "," << interval[1] << "] " << endl;
    }
    return 0;
}