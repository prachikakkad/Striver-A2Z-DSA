class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
    int ans = INT_MAX;

    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
        mid = low + (high - low)/2;

        if(nums[mid] <= nums[high]){
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }

        else{
                low = mid + 1;
        }
    }
    return ans;
    }
};