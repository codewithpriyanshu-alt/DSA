/*
------------------------------------------------------------
📝 Problem: Build Array With Stack Operations
📌 Type: Simulation / Arrays
🔗 Link: https://leetcode.com/problems/build-an-array-with-stack-operations/

⏱️ Time Complexity: O(n)
📦 Space Complexity: O(n)
------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    std::vector<std::string> buildArray(std::vector<int>& target, int n) {
        std::vector<std::string> ans;
        int j = 0; // pointer for target array

        for (int i = 1; i <= n; i++) {
            if (i == target[j]) {
                ans.push_back("Push");
                j++;

                if (j == target.size()) break;
            } 
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};

int main() {
    std::vector<int> target = {1, 2};
    int n = 3;

    Solution sol;
    std::vector<std::string> result = sol.buildArray(target, n);

    std::cout << "Output: ";
    for (const std::string& s : result) {
        std::cout << s << ' ';
    }
    std::cout << std::endl;

    return 0;
}
