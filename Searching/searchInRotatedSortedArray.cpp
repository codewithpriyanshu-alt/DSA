/****************************************************
 * Problem: Search in Rotated Sorted Array
 * Type: Binary Search
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 ****************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target)
                return mid;

            // Left half is sorted
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target <= nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            // Right half is sorted
            else {
                if (nums[mid] <= target && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(nums, target);
    if (index != -1)
        std::cout << "Target found at index: " << index << "\n";
    else
        std::cout << "Target not found.\n";

    return 0;
}
