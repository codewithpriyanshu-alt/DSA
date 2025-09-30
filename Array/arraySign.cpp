/************************************************************
 * Problem: Sign of the Product of an Array
 * Type: Array / Math
 * Link: https://leetcode.com/problems/sign-of-the-product-of-an-array/
 * 
 * Time Complexity: O(N)
 *   - N = number of elements in nums
 * 
 * Space Complexity: O(1)
 *   - Only an integer counter is used.
 ************************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int count = 0;

        for (int i : nums) {
            if (i == 0)
                return 0;        // product becomes zero
            else if (i < 0)
                count++;         // track negatives
        }

        if (count % 2 == 0)
            return 1;            // even negatives → positive product
        return -1;               // odd negatives → negative product
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> nums1 = {-1, -2, -3, -4, 3, 2, 1};
    std::vector<int> nums2 = {1, 5, 0, 2, -3};
    std::vector<int> nums3 = {-1, 1, -1, 1, -1};

    std::cout << "Sign of nums1 product: " << sol.arraySign(nums1) << std::endl; // 1
    std::cout << "Sign of nums2 product: " << sol.arraySign(nums2) << std::endl; // 0
    std::cout << "Sign of nums3 product: " << sol.arraySign(nums3) << std::endl; // -1

    return 0;
}
