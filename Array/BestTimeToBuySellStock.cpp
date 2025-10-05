/*
Problem Name   : Best Time to Buy and Sell Stock
Problem Type   : Array / Greedy
Problem Link   : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits> // For INT_MAX and INT_MIN
#include <algorithm> // For std::min and std::max

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int bestBuy = INT_MAX;
        int maxProfit = INT_MIN;

        for (int price : prices) {
            bestBuy = std::min(bestBuy, price);

            int profit = price - bestBuy;
            maxProfit = std::max(maxProfit, profit);
        }

        return maxProfit;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    int profit = sol.maxProfit(prices);
    std::cout << "Maximum Profit: " << profit << "\n";

    return 0;
}
