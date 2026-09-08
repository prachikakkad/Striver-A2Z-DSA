#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums = {1,0,-1,0,-2,2};
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end()); 

    int target = 0, n = nums.size();
    long long sum = 0;

    for(int i = 0; i < n; i++){
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for(int j = i + 1; j < n; j++){
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int left = j + 1;
            int right = n - 1;
            
            while(left < right){
                sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if(sum == target){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ans.push_back(temp);
                    
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    
    for(auto x : ans){
        cout << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << endl;
    }

    return 0;
}