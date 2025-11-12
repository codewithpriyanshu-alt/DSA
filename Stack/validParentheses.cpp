/*
Problem: Valid Parentheses
Type: Stack / String
Link: https://leetcode.com/problems/valid-parentheses/

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <stack>
#include <string>

class Solution {
private:
    // Returns the matching closing bracket for an opening one
    char oppositeChar(char c) {
        switch (c) {
            case '{': return '}';
            case '(': return ')';
            case '[': return ']';
            default:  return '.';
        }
    }

    // Checks if the character is an opening bracket
    bool isOpen(char c) {
        return (c == '{' || c == '(' || c == '[');
    }

public:
    bool isValid(std::string s) {
        std::stack<char> sign;

        for (char c : s) {
            if (isOpen(c)) {
                sign.push(c);
            } else {
                if (sign.empty()) return false;
                if (oppositeChar(sign.top()) == c)
                    sign.pop();
                else
                    return false;
            }
        }

        return sign.empty();
    }
};

// Example usage
int main() {
    Solution sol;
    std::string s = "{[()]}";
    std::cout << (sol.isValid(s) ? "Valid" : "Invalid") << std::endl;

    s = "{[(])}";
    std::cout << (sol.isValid(s) ? "Valid" : "Invalid") << std::endl;

    return 0;
}
