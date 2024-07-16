//LINK: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0], maxprofit = 0;
        for (int i = 1; i < prices.size(); i++) {

            maxprofit = max(maxprofit, prices[i] - minprice);
            minprice = min(minprice, prices[i]);
        }
        return maxprofit;
    }
};
