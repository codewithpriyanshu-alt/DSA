/*
Problem Name   : Binary Search
Problem Type   : Array / Searching
Problem Link   : https://leetcode.com/problems/binary-search/
Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return -1;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int index = sol.search(nums, target);
    if (index != -1)
        std::cout << "Target " << target << " found at index " << index << "\n";
    else
        std::cout << "Target " << target << " not found in the array.\n";

    return 0;
}
