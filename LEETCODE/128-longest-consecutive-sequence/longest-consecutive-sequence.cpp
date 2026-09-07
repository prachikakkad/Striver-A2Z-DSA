class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

    int n = nums.size();
    int max_len = 1;

    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int x : st)
        {
            if (st.find(x - 1) == st.end())
            {
                int current_chain_len = 1;
                int c = x;
                while (st.find(c + 1) != st.end())
                {
                    current_chain_len++;
                    c++;
                }
                max_len = max(max_len, current_chain_len);
            }
        }
        return max_len;
    }
    }
};