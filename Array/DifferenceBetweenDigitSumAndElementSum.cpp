/*
 * Problem: Difference Between Element Sum and Digit Sum of an Array
 * Type: Array / Math
 * Link: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
 * Time Complexity: O(n * logM) // n = number of elements, M = maximum element value (logM for digit extraction)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int differenceOfSum(std::vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for (int n : nums) {
            elementSum += n;
            if (n > 9) {
                int number = n;
                while (number != 0) {
                    int digit = number % 10;
                    digitSum += digit;
                    number /= 10;
                }
            } else {
                digitSum += n;
            }
        }

        return elementSum - digitSum;
    }
};

// Example usage
int main() {
    Solution sol;

    std::vector<int> nums = {1, 15, 6, 3};
    std::cout << sol.differenceOfSum(nums) << std::endl; // Output: 9

    return 0;
}
