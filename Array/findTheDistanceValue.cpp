 /*
 * Problem: 1385. Find the Distance Value Between Two Arrays
 * Type: Array | Absolute Difference | Brute Force
 * Link: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
 * Time Complexity: O(n * m)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
        int ans = 0;

        for(int i = 0; i < static_cast<int>(arr1.size()); i++) {
            bool isValid = false;
            
            for(int j = 0; j < static_cast<int>(arr2.size()); j++) {
                if(std::abs(arr1[i] - arr2[j]) > d) 
                    isValid = true;
                else {
                    isValid = false;
                    break;   
                }
            }

            if(isValid)
                ans++;
        }

        return ans;
    }
};

int main() {
    std::vector<int> arr1 = {1, 4, 2, 3};
    std::vector<int> arr2 = {-4, -3, 6, 10, 20, 30};
    int d = 3;

    Solution obj;
    int result = obj.findTheDistanceValue(arr1, arr2, d);

    std::cout << "Distance Value = " << result << std::endl;

    return 0;
}
