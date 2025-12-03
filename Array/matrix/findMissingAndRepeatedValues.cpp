/*
 * Problem : Find Missing and Repeated Values
 * Type : Matrix + Hashing + Math
 * Link: https://leetcode.com/problems/find-missing-and-repeated-values/
 * Time Complexity : O(n²)
 * Space Complexity : O(n²)
*/

#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid) {
        int n = grid.size();

        std::unordered_set<int> s;
        int repeated = 0, missing = 0;

        int expectedSum = (n * n) * (n * n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                actualSum += grid[i][j];

                if (s.find(grid[i][j]) != s.end()) {
                    repeated = grid[i][j];
                }
                s.insert(grid[i][j]);
            }
        }

        missing = expectedSum + repeated - actualSum;

        return {repeated, missing};
    }
};

int main() {
    Solution solver;

    std::vector<std::vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    std::vector<int> result = solver.findMissingAndRepeatedValues(grid);

    std::cout << "Repeated Value: " << result[0] << std::endl;
    std::cout << "Missing Value : " << result[1] << std::endl;

    return 0;
}
