class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int sum = 0, maxx = nums[0];

    for(auto x : nums){
        if(x > maxx){
            maxx = x;
        }
        sum = sum + x;
    }

    int low = maxx, high = sum, ans = 0;

    while (low <= high)
    {
        int c = 1, curr = 0;

        int mid = low + (high - low)/2;

        for(auto x : nums){
            if(curr + x > mid){
                c++;
                curr = x;
            }
            else{
                curr += x;
            }
        }

        if(c <= k){
            ans = mid;
            high = mid - 1;

        }
        else{
            low = mid + 1;
        }
    }
    
    return ans;

    }
};