class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, max_freq = 0;
        long long actual_sum = 0;

        for(int right = 0; right < nums.size(); right++){
            actual_sum = actual_sum + nums[right];
            while(((long long)(right - left + 1) * nums[right]) - actual_sum > k){
                    actual_sum = actual_sum - nums[left];
                    left++; 
            }
            int win_size = right - left + 1;

            max_freq = max(max_freq, win_size);

        }
        return max_freq;  
    }
};