/*
💻 Problem: Search Insert Position
📌 Type: Binary Search / Array
🔗 Link: [https://leetcode.com/problems/search-insert-position/](https://leetcode.com/problems/search-insert-position/)
⏱️ Time Complexity: O(log n)
📦 Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(nums[mid] == target)
                return mid;

            if(nums[mid] > target)
                end = mid - 1;
            else
                st = mid + 1;
        }

        return st;
    }
};

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    Solution obj;
    std::cout << obj.searchInsert(nums, target) << std::endl;
    return 0;
}
