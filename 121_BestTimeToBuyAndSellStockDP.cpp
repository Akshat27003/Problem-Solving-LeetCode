class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0]; //assume first day price of stock to be min
        int profit=0; //buy and sell same day.
        //check from 2nd day onwards
        // DP Solution: TC: O(N), SC: O(1)
        for(int i=1;i<prices.size();i++)
        {
            int cost=prices[i]-mini; //cost of selling on each day knowing we bought it on day it was minimal.
            profit=max(profit,cost); //if cost of selling is greater, then store new cost.
            mini=min(prices[i],mini); //making sure the stock is bought on min price day possible.
        }

        return profit;

    }
};
