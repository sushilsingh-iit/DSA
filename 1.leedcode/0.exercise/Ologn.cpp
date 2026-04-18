#include <iostream>
#include <vector> // Added to handle arrays easily
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int s = 0, e = n - 1;

    // FIX 1: The condition must be (s <= e). 
    // (s <= 0) would stop the loop almost immediately.
    while (s <= e) {
        
        // This formula prevents integer overflow
        int mid = s + (e - s) / 2;

        // FIX 2: Use comparison operators (==, <, >)
        if (arr[mid] == target) {
            return mid; // Target found
        } 
        else if (arr[mid] < target) {
            s = mid + 1; // Look in the right half
        } 
        else {
            e = mid - 1; // Look in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int myArr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int target = 10;

    int result = binarySearch(myArr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}