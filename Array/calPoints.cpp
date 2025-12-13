/*
 * Problem Name : Baseball Game
 * Problem Type : array / Simulation
 * Problem Link : https://leetcode.com/problems/baseball-game/
 * Time Complexity : O(n)
 * Space Complexity : O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> records;

        for (const string& str : operations) {
            if (str == "+") {
                int sum = records[records.size() - 1] + records[records.size() - 2];
                records.push_back(sum);
            } 
            else if (str == "D") {
                records.push_back(records.back() * 2);
            } 
            else if (str == "C") {
                records.pop_back();
            } 
            else {
                records.push_back(stoi(str));
            }
        }

        int totalScore = 0;
        for (int score : records) {
            totalScore += score;
        }

        return totalScore;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<string> operations = {"5", "2", "C", "D", "+"};
    cout << sol.calPoints(operations) << endl; // Output: 30
    return 0;
}
