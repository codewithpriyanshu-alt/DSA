/******************************************************
 * 🧩 Problem: Reverse String
 * 🧠 Type: Two-Pointer / In-Place Reversal
 * 📎 Link: https://leetcode.com/problems/reverse-string/
 * ⏱️ Time Complexity: O(n)
 * 💾 Space Complexity: O(1)
 ******************************************************/

#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int st = 0, end = s.size() - 1;
        while (st < end) {
            std::swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};

int main() {
    std::vector<char> s = {'P', 'r', 'i', 'y', 'a', 'n', 's', 'h', 'u'};
    Solution obj;
    obj.reverseString(s);

    std::cout << "Reversed: ";
    for (char ch : s)
        std::cout << ch;
    std::cout << std::endl;
    return 0;
}
