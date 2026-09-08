class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
         int n = nums.size(), count1 = 0, el1, check1 = 0;
    int count2 = 0, el2, check2 = 0;


    for(int i = 0; i < n; i++){
        
        if(el1 == nums[i]){
            count1++;
        }
        else if(el2 == nums[i]){
            count2++;
        }
        else if(count1 == 0){
            el1 = nums[i];
            count1 = 1;
        }
        else if(count2 == 0){
            el2 = nums[i];
            count2 = 1;
        }
        else{
            count1--;
            count2--;
        }
        
    }

    for(int i = 0; i < n; i++){
        if(nums[i] == el1){
            check1++;
        }
        if(nums[i] == el2){
            check2++;
        }
        
    }

    if(check1 > (n/3)){
        ans.push_back(el1);
    }

    if(check2 > (n/3)){
        ans.push_back(el2);
    }
    return ans;
    }
};