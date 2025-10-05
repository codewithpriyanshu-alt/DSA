/*
 * Problem: Find Words Containing a Character
 * Type: String / Array
 * Link: https://leetcode.com/problems/find-words-containing-character
 * Time Complexity: O(n * m) // n = number of words, m = average word length
 * Space Complexity: O(k)   // k = number of words containing the character
 */

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != std::string::npos) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

// Example usage
int main() {
    Solution sol;

    std::vector<std::string> words = {"apple", "banana", "cherry", "date"};
    char x = 'a';
    std::vector<int> result = sol.findWordsContaining(words, x);

    for (int idx : result) {
        std::cout << idx << " ";
    }
    std::cout << std::endl; // Output: 0 1 3

    return 0;
}
