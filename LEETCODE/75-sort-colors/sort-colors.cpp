class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
         for (int i = n - 1; i >= 1; i--) {
        bool didSwap = false;
        for (int j = 0; j <= i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap) break; // nothing swapped means array is already sorted
    }

    }
};