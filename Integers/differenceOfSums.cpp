/*
 * Problem: Difference Between Sum of Non-Divisible and Divisible Numbers
 * Type: Math / Simulation
 * Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
 * Time Complexity: O(n) // Looping from 1 to n
 * Space Complexity: O(1)
 */

#include <iostream>

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divisibleInt = 0;
        int nonDivisibleInt = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m == 0)
                divisibleInt += i;
            else
                nonDivisibleInt += i;
        }

        return nonDivisibleInt - divisibleInt;
    }
};

// Example usage
int main() {
    Solution sol;

    int n = 10, m = 3;
    std::cout << sol.differenceOfSums(n, m) << std::endl; // Output: 22

    return 0;
}
