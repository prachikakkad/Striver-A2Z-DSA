class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = INT_MIN;
    int n = nums.size(), left = 0, sum = 0;

    for(int right = 0; right < n; right++){

        sum = sum + nums[right];
        maxx = max(maxx, sum);

        if(sum < 0){
            sum = 0;
            left = right + 1;
        }
    }
    return maxx;
    }
};