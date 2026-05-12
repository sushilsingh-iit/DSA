// 852. Peak Index in a Mountain Array
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

 

// Example 1:

// Input: arr = [0,1,0]

// Output: 1

// Example 2:

// Input: arr = [0,2,1,0]

// Output: 1

// Example 3:

// Input: arr = [0,10,5,2]

// Output: 1

 

// Constraints:

// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int end = arr.size() - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Check if mid is the peak
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }

            // If we are on the ascending part, peak is to the right
            if (arr[mid] < arr[mid + 1]) {
                st = mid + 1;
            } 
            // If we are on the descending part, peak is to the left
            else {
                end = mid - 1;
            }
        }
        return -1; // Default return
    }
};

// The main function to run and test your code in VS Code
int main() {
    Solution sol;
    
    // Example 1
    vector<int> arr1 = {0, 1, 0};
    cout << "Example 1 Output: " << sol.peakIndexInMountainArray(arr1) << " (Expected: 1)" << endl;

    // Example 2
    vector<int> arr2 = {0, 2, 1, 0};
    cout << "Example 2 Output: " << sol.peakIndexInMountainArray(arr2) << " (Expected: 1)" << endl;

    // Example 3
    vector<int> arr3 = {0, 10, 5, 2};
    cout << "Example 3 Output: " << sol.peakIndexInMountainArray(arr3) << " (Expected: 1)" << endl;

    return 0;
}
