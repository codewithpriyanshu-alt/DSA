/*
Problem: First Palindromic String in a List
Type: String / Array
Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/  (LeetCode)
Time Complexity: O(n * m) where n = number of words, m = max length of a word
Space Complexity: O(m) for reversed string
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::reverse

class Solution {
public:
    std::string firstPalindrome(std::vector<std::string>& words) {
        for(std::string word: words) {
            std::string w = word; 
            std::reverse(w.begin(), w.end()); // reversing the word
            if(word == w) // checking if current word is palindrome
                return word;
        }
        return "";
    }
};

// Example usage
int main() {
    Solution sol;
    std::vector<std::string> words1 = {"abc","car","ada","racecar","cool"};
    std::vector<std::string> words2 = {"notapalindrome","racecar","hello"};

    std::cout << "First palindrome in words1: " << sol.firstPalindrome(words1) << "\n"; // Output: ada
    std::cout << "First palindrome in words2: " << sol.firstPalindrome(words2) << "\n"; // Output: racecar

    return 0;
}
