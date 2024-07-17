//LINK: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,i=0,j=1,n=prices.size();
        while(j<n){
            if(prices[j-1]>prices[j]){
                maxProfit+=prices[j-1]-prices[i];
                i=j;
            }
            j++;
            
        }
        maxProfit+=prices[n-1]-prices[i];
        return maxProfit;
        
    }
};
