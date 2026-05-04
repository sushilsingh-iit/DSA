#include <iostream>
#include <vector>
using namespace std;

// Added & to pass by reference (prevents unnecessary copying)
int recbinarysearch(const vector<int> &arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        
        if (tar > arr[mid]) { // Search 2nd half 
            return recbinarysearch(arr, tar, mid + 1, end);
        } else if (tar < arr[mid]) { // Search 1st half 
            return recbinarysearch(arr, tar, st, mid - 1);
        } else { // Found the target
            return mid;
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; 
    int tar1 = 12;
    // Pass the starting (0) and ending indices (size - 1)
    cout << "Index of " << tar1 << ": " << recbinarysearch(arr1, tar1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 3;
    cout << "Index of " << tar2 << ": " << recbinarysearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}