/*
 * Problem: Subtract the Product and Sum of Digits of an Integer
 * Type: Math / Integer
 * Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 * Time Complexity: O(logN) // N is the number, logN digits processed
 * Space Complexity: O(1)
 */

#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        int number = n;
        while (number != 0) {
            int digit = number % 10;
            product *= digit;
            sum += digit;
            number /= 10;
        }

        return product - sum;
    }
};

// Example usage
int main() {
    Solution sol;

    int n = 234;
    std::cout << sol.subtractProductAndSum(n) << std::endl; // Output: 15

    return 0;
}
