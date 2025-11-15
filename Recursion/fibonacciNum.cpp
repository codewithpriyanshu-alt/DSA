/*******************************************************
 * 🧮 Problem: Fibonacci Number (Recursive)
 * 📌 Type: Recursion
 * 🔗 Link: https://leetcode.com/problems/fibonacci-number/
 * ⏱️ Time Complexity: O(2^n)
 * 💾 Space Complexity: O(n)  (due to recursion stack)
 *******************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    int fib(int n) {
        if (n == 1 || n == 0)
            return n;

        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;

    int n = 6;  
    std::cout << "Fibonacci(" << n << ") = " << sol.fib(n) << std::endl;

    return 0;
}
