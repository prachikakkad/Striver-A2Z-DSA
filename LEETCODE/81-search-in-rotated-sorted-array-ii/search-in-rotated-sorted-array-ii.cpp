class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
    bool ans = false;

    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
        mid = low + (high - low)/2;

        if(nums[mid] == target){
            ans = true;
            break;
        }

        else if(nums[low] == nums[mid] && nums[low] == nums[high]){
            low++;
            high--;
        }

        else if(nums[low] <= nums[mid]){
            if((nums[low] <= target) && (target < nums[mid])){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        else{
            if((nums[mid] < target) && (target <= nums[high])){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return ans;
    }
};