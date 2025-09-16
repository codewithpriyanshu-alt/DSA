/*
 * Problem: Number of Employees Who Met the Target
 * Type: Array
 * Link: https://leetcode.com/problems/number-of-employees-who-met-the-target/
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
        int ans = 0;
        for(int h: hours) {
            if(h >= target)
                ans++;
        }
        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<int> hours = {0, 1, 2, 3, 4};
    int target = 2;

    std::cout << sol.numberOfEmployeesWhoMetTarget(hours, target) << std::endl;

    return 0;
}