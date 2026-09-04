class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int n = nums.size();
    int maxx = 0, c = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            c++;
        }

        else if(nums[i] == 0){
            c = 0;
        }

        if(c > maxx){
            maxx = c;
        }
    }
    return maxx;
    }
};