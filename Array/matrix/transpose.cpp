/****************************************************
 * Problem: Transpose Matrix
 * Type: Matrix / 2D Array
 * Link: (not provided)
 *
 * Time Complexity: O(rows * cols)
 * Space Complexity: O(rows * cols) 
 ****************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& matrix) {
        std::vector<std::vector<int>> ans(matrix[0].size());

        for(int j = 0; j < static_cast<int>(matrix[0].size()); j++) {
            for(int i = 0; i < static_cast<int>(matrix.size()); i++) {
                ans[j].push_back(matrix[i][j]);
            }
        }

        return ans;
    }
};

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    Solution sol;
    std::vector<std::vector<int>> ans = sol.transpose(matrix);

    std::cout << "Transposed Matrix:\n";
    for(const auto& row : ans) {
        for(const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
