/*
 * Problem: Richest Customer Wealth
 * Type: Array / Matrix
 * Link: https://leetcode.com/problems/richest-customer-wealth/
 * Time Complexity: O(m * n)  // m = number of customers, n = number of accounts per customer
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
private:
    int ArraySum(std::vector<int> vec) {
        int sum = 0;
        for (int i : vec)
            sum += i;
        return sum;
    }

public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int ans = 0;
        for (std::vector<int> account : accounts) {
            ans = std::max(ans, ArraySum(account));
        }
        return ans;
    }
};

// Example usage
int main() {
    Solution sol;

    std::vector<std::vector<int>> accounts = {{1,2,3}, {3,2,1}, {4,5,6}};
    std::cout << sol.maximumWealth(accounts) << std::endl; // Output: 15

    return 0;
}
