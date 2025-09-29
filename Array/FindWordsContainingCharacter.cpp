/*
 * Problem: Find words Containing Character
 * Type: String / Array
 * Link: https://leetcode.com/problems/find-words-containing-character
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> ans;

        for(int i = 0; i < words.size(); i++) {
            if(words[i].find(x) != std::string::npos) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<std::string> words = {"leet","code"};
    char x = 'e';

    std::vector<int> ans = sol.findWordsContaining(words, x);

    for(int i: ans) {
        std::cout << i << " ";
    }

    return 0;
}