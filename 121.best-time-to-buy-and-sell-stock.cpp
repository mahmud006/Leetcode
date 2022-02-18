/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            mn = min(mn, prices[i]);
            profit = max(profit, prices[i]-mn);
        }
        return profit;
    }
};
// @lc code=end

