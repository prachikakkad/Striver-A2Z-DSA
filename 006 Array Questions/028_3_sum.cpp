#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    
    
    for(int i = 0; i < n; i++){
        if(i > 0 && ans[i] == ans[i-1]) continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            
            if(sum == 0){
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[left]);
                temp.push_back(nums[right]);
                ans.push_back(temp);
                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }

            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }

    return 0;
}