/*
 *  Problem Name  : Single Number
 *  Problem Type : Bit Manipulation, XOR
 *  Problem Link : https://leetcode.com/problems/single-number/
 *  Time Complexity: O(n)
 *  Space Complexity: O(1)
 */

#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int answer = nums[0];

        for (int i = 1; i < static_cast<int>(nums.size()); i++) {
            answer ^= nums[i];
        }

        return answer;
    }
};

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};

    Solution solution;
    int result = solution.singleNumber(nums);
    
    std::cout << "Single Number is: " << result << std::endl;

    return 0;
}
