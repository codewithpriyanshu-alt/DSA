/*
 * Problem: Squares of a Sorted Array
 * Type: Array
 * Link: https://leetcode.com/problems/squares-of-a-sorted-array/
 * Time Complexity: O(n)
 * Space Complexity: O(c)
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> arr(n, 0);
        int left = 0, right = n - 1, end = n - 1;

        while(left <= right) {
            int element = std::max(std::abs(nums[left]), std::abs(nums[right]));
            arr[end] = element*element;

            (element == std::abs(nums[right]) ? right-- : left++);
            end--;
        }

        return arr;
    }
};

// Example usage

int main() {
    Solution sol;

    std::vector<int> nums = {-4,-1,0,3,10};
    std::vector<int> ans = sol.sortedSquares(nums);
    for(int i: ans)
        std::cout << i << " ";
    return 0;
}