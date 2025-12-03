/*
 * Problem: Final Prices With a Special Discount in a Shop
 * Type: Array / Brute Force
 * Link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 * Time Complexity: O(n^2)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> finalPrices(std::vector<int>& prices) {
        std::vector<int> answer;

        for(int i = 0; i < prices.size(); i++) {
            bool isDiscount = false;

            for(int j = i + 1; j < prices.size(); j++) {
                if(prices[j] <= prices[i]) {
                    answer.push_back(prices[i] - prices[j]);
                    isDiscount = true;
                    break;
                }
            }

            if(!isDiscount)
                answer.push_back(prices[i]);
        }

        return answer;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> prices = {8, 4, 6, 2, 3};

    std::vector<int> ans = sol.finalPrices(prices);

    std::cout << "Final Prices: ";
    for(int x : ans)
        std::cout << x << " ";

    return 0;
}
