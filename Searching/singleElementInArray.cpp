/*
---------------------------------------------
🧠 Problem: Single Element in a Sorted Array
📚 Type: Binary Search / Array
🔗 Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
⏱️ Time Complexity: O(log n)
💾 Space Complexity: O(1)
---------------------------------------------
*/

#include <iostream>
#include <vector>

class Solution {
public: 
    int singleNonDuplicate(std::vector<int>& nums) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Edge case: single element at start
            if (mid == 0)
                return nums[mid];

            // Check if the mid element is the single element
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];

            // Determine which half to continue searching
            if (nums[mid - 1] == nums[mid]) {
                if (mid % 2 == 0)
                    end = mid - 1;
                else
                    st = mid + 1;
            } else {
                if (mid % 2 == 0)
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    std::vector<int> nums = {1};
    Solution sol;
    std::cout << sol.singleNonDuplicate(nums) << std::endl;
    return 0;
}
