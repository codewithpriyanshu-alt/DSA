/*
 * Problem: Majority Element
 * Type: Array / Hash Map
 * Link: https://leetcode.com/problems/majority-element/
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int element = 0;
        int freq = 0;

        for(int i : nums) {
            if(freq == 0)
                element = i;
            if(i != element)
                freq--;
            if(i == element)
                freq++;
        }

        return element;
    }
};

// Example usage 
int main() {
    Solution sol;
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    std::cout << "Majority Element: " << sol.majorityElement(nums) << std::endl;

    return 0;
}