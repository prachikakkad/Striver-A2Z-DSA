class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

    int n = nums.size();

    int left = 0, right = n-1, sum = 0;

    vector<pair<int, int>> pairedNums(n);

    for (int i = 0; i < n; i++) {
        pairedNums[i] = {nums[i], i};
    }

    sort(pairedNums.begin(), pairedNums.end());

    while (left < right)
    {
        sum = pairedNums[left].first + pairedNums[right].first;
        if (sum == target)
        {
            ans.push_back(pairedNums[left].second);
            ans.push_back(pairedNums[right].second);
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return ans;
    }
};