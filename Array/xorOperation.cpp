/************************************************************
 * Problem: XOR Operation in an Array
 * Type: Array / Bit Manipulation
 * Link: https://leetcode.com/problems/xor-operation-in-an-array/
 * 
 * Time Complexity: O(N)
 *   - N = number of elements in the array
 * 
 * Space Complexity: O(1)
 *   - Only a single integer variable is used.
 ************************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        for (int i = 1; i < n; i++) {
            ans = ans ^ (start + 2 * i);
        }
        return ans;
    }
};

// Example usage
int main() {
    Solution sol;

    int n1 = 5, start1 = 0;
    int n2 = 4, start2 = 3;
    int n3 = 1, start3 = 7;

    std::cout << "XOR result for n1, start1: " << sol.xorOperation(n1, start1) << std::endl; // 8
    std::cout << "XOR result for n2, start2: " << sol.xorOperation(n2, start2) << std::endl; // 8
    std::cout << "XOR result for n3, start3: " << sol.xorOperation(n3, start3) << std::endl; // 7

    return 0;
}
