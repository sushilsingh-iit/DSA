// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 10^5
// 0 <= height[i] <= 10^4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0; 
        int leftpointer = 0, rightpointer = height.size() - 1; 
        
        while (leftpointer < rightpointer) {
            int w = rightpointer - leftpointer;
            int ht = min(height[leftpointer], height[rightpointer]);
            int currentwater = w * ht;
            maxwater = max(maxwater, currentwater);

            // Use the ternary operator to move the smaller pointer
            height[leftpointer] < height[rightpointer] ? leftpointer++ : rightpointer--;
        }

        return maxwater;
    }
};

int main() {
    Solution sol;
    
    // Example test case
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    
    int result = sol.maxArea(height);
    
    cout << "The maximum area is: " << result << endl;
    
    return 0;
}