/*
 * Problem: Robot Return to Origin
 * Type: String / Simulation
 * Link: https://leetcode.com/problems/robot-return-to-origin/
 * Time Complexity: O(n) // n = length of moves string
 * Space Complexity: O(1)
 */

#include <iostream>
#include <string>

class Solution {
public:
    bool judgeCircle(std::string moves) {
        int x = 0;
        int y = 0;

        for (char move : moves) {
            if (move == 'U')
                y++;
            else if (move == 'D')
                y--;
            else if (move == 'L')
                x--;
            else if (move == 'R')
                x++;
        }

        return (x == 0 && y == 0);
    }
};

// Example usage
int main() {
    Solution sol;

    std::string moves = "UDLR";
    std::cout << std::boolalpha << sol.judgeCircle(moves) << std::endl; // Output: true

    return 0;
}
