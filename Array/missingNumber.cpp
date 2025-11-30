/*
 * Problem: Missing Number
 * Type: Array, Math
 * Link: (not provided)
 * Time Complexity: O(n)
 * Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i : nums) {
            sum += i;
        }
        return (n * (n + 1)) / 2 - sum;
    }
};

int main() {
    std::vector<int> nums = {3, 0, 1};
    Solution obj;
    std::cout << "Missing Number: " << obj.missingNumber(nums) << std::endl;
    return 0;
}
