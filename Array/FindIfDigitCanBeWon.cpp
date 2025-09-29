/*
 * Problem: Find if Digit Game Can Be Won
 * Type: Array
 * Link: https://leetcode.com/problems/find-if-digit-game-can-be-won/
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int sumSingleDigit = 0;
        int sumDoubleDigit = 0;

        for(int n: nums) {
            if(n > 9) // all double digit filtering
                sumDoubleDigit += n;
            else // all single digit filtering
                sumSingleDigit += n;
        }

        return (sumSingleDigit != sumDoubleDigit);
    }
};

// Example usage

int main() {
    Solution sol;

    std::vector<int> nums = {1,2,3,4,5,14};
    std::cout << sol.canAliceWin(nums) << std::endl;
    return 0;
}