// 33. Search in Rotated Sorted Array
// Medium
// Topics
// premium lock icon
// Companies
// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1
 

// Constraints:

// 1 <= nums.length <= 5000
// -10^4 <= nums[i] <= 10^4
// All values of nums are unique.
// nums is an ascending array that is possibly rotated.
// -10^4 <= target <= 10^4

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0;
        int end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == tar) {
                return mid;
            }

            // Identify which half is sorted
            if (A[st] <= A[mid]) { 
                // Left side is sorted
                if (A[st] <= tar && tar <= A[mid]) {
                    end = mid - 1; // Target is in the left sorted range
                } else {
                    st = mid + 1;  // Target is in the right half
                }
            } else { 
                // Right side is sorted
                if (A[mid] <= tar && tar <= A[end]) {
                    st = mid + 1;  // Target is in the right sorted range
                } else {
                    end = mid - 1; // Target is in the left half
                }
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution sol;
    
    // Example test case: Rotated sorted array
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    int result = sol.search(nums, target);
    
    if (result != -1) {
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }
    
    return 0;
}
