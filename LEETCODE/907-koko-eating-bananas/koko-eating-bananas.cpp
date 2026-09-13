class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = piles[0], k = 0;

    for(auto x : piles){
        if(x > high){
            high = x;
        }
    }

    int low = 1;

    while (low <= high) 
    {
        long long mid = low + (high - low)/2;

        long long  total_hours = 0;

        for(auto x : piles){
            total_hours = total_hours + (x + mid - 1) / mid;
        }

        if(total_hours <= h){
            k = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return k;
    }
};