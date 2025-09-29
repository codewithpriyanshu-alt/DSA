/*
 * Problem: Maximum Achievable Number
 * Type: Math
 * Link: https://leetcode.com/problems/maximum-achievable-number/
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <iostream>

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + (2 * t);
    }
};

// Example usage
int main() {
    Solution sol;

    int num = 3, t = 2;
    std::cout << sol.theMaximumAchievableX(num, t) << std::endl; // Output: 7

    return 0;
}
