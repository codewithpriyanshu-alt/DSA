/*
 * Problem: Maximum Number of Words Found in Sentences
 * Type: String / Array
 * Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
 * 
 * Time Complexity: O(N * L) 
 *   - N = number of sentences
 *   - L = average length of a sentence
 *   - Because we scan each character once to count spaces.
 * 
 * Space Complexity: O(1)
 *   - Only a few integer variables used.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::count and std::max

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int maxSpace = 0;
        for(const std::string& sentence : sentences) {
            int space = std::count(sentence.begin(), sentence.end(), ' ');
            maxSpace = std::max(maxSpace, space);
        }
        return maxSpace + 1; // words = spaces + 1
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<std::string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    std::cout << "Maximum words in a sentence: " << sol.mostWordsFound(sentences) << std::endl;

    return 0;
}
