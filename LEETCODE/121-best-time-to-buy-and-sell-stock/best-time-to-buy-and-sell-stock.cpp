class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 0, profit = 0, n = prices.size();
    int maxx = 0;

    for(sell = 0; sell < n; sell++){

        profit = prices[sell] - prices[buy];
        maxx = max(maxx, profit);

        cout << profit << endl;

        if(prices[sell] < prices[buy]){
            buy = sell;
        }
    }
    return maxx;
    }
};