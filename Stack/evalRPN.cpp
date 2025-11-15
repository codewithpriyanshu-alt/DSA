/*******************************************************
 * 🧮 Problem: Evaluate Reverse Polish Notation (RPN)
 * 📌 Type: Stack / Expression Evaluation
 * 🔗 Link: LeetCode 150 (if applicable)
 *
 * ⏱️ Time Complexity: O(n)
 * 🧠 Space Complexity: O(n)
 *******************************************************/

#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int evalRPN(const std::vector<std::string> &tokens) {
        std::stack<std::string> s;

        for (const std::string &token : tokens) {

            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int first = std::stoi(s.top());
                s.pop();
                int second = std::stoi(s.top());
                s.pop();

                int ans = 0;

                if (token == "+")
                    ans = second + first;
                else if (token == "-")
                    ans = second - first;
                else if (token == "*")
                    ans = second * first;
                else
                    ans = second / first;

                s.push(std::to_string(ans));
            }
            else {
                s.push(token);
            }
        }

        return std::stoi(s.top());
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<std::string> tokens = {"4", "13", "5", "/", "+"};
    std::cout << sol.evalRPN(tokens) << std::endl;  // Output: 6
    return 0;
}
