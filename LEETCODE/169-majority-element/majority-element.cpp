class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), s = 0, ans = 0;

    map<int, int> hash;

    for(int i = 0; i < n; i++){
        hash[nums[i]]++;
    }

    for(auto x : hash){
        s = max(s, x.second);
    }

    if(s > n/2){
        for(auto x : hash){
            if(s == x.second){
                ans = x.first;
                break;
            }
        }
    }
    return ans;
    }
};