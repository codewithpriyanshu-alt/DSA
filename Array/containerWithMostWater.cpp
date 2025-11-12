/************************************************************
 * 🧱 Problem: Container With Most Water
 * 🧩 Type: Two-Pointer / Array
 * 🔗 Link: https://leetcode.com/problems/container-with-most-water/
 * ⏱️ Time Complexity: O(n)
 * 💾 Space Complexity: O(1)
 ************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int st = 0, end = height.size() - 1;
        int area = 0;

        while (st <= end) {
            int width = end - st;
            int side = std::min(height[st], height[end]);

            area = std::max(area, side * width);

            (height[st] < height[end] ? st++ : end--);
        }

        return area;
    }
};

// Example usage
int main() {
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution sol;
    std::cout << "Maximum water area: " << sol.maxArea(height) << std::endl;
    return 0;
}
