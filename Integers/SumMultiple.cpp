/*
 * Problem: Sum Multiples
 * Type: Integer
 * Link: https://leetcode.com/problems/sum-multiples/
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>

class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++) {
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
                ans += i;
        }

        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    int n = 7;

    std::cout << sol.sumOfMultiples(n) << std::endl;

    return 0;
}