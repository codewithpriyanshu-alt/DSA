/*
===========================================
Problem Name  : Peak Index in a Mountain Array  
Problem Type  : Binary Search  
Problem Link  : https://leetcode.com/problems/peak-index-in-a-mountain-array/  
Time Complexity: O(log n)  
Space Complexity: O(1)  
===========================================
*/

#include <iostream>
#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        int st = 1, end = arr.size() - 2;  // boundaries (excluding first and last)

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if mid is the peak element
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;

            // If the slope is increasing, move right
            if (arr[mid] < arr[mid + 1])
                st = mid + 1;
            else
                end = mid - 1;
        }

        return -1; // In case no peak found (shouldn't happen in a valid mountain array)
    }
};

// Example usage
int main() {
    std::vector<int> arr = {0, 2, 5, 10, 7, 4, 1};
    Solution sol;

    int peakIndex = sol.peakIndexInMountainArray(arr);
    std::cout << "Peak index: " << peakIndex << std::endl;
    std::cout << "Peak element: " << arr[peakIndex] << std::endl;

    return 0;
}
