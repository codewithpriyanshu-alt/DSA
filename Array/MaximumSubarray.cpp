/*
 * Problem: Maximum Subarray
 * Type: Array
 * Link: https://leetcode.com/problems/maximum-subarray/
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;

        for(int i : nums) {
            currentSum += i;
            maxSum = std::max(currentSum, maxSum);
            if(currentSum < 0)
                currentSum = 0;
        }

        return maxSum;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> nums = {-1, -2, -3};
    
    std::cout << sol.maxSubArray(nums) << std::endl;

    return 0;
}