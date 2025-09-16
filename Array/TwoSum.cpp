/*
 * Problem: Two Sum
 * Type: Array / Hash Map
 * Link: https://leetcode.com/problems/two-sum/
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
 
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end()) // if exists in m
                return {m[second], i};
            else
                m[first] = i;
        }

        return {-1, -1};
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> ans = sol.twoSum(nums, target);

    std::cout << "ans: ";
    for(int n: ans) 
        std::cout << n << " ";

    return 0;
}
