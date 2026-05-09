#include <iostream>
#include <vector>
using namespace std;

int findPeakIndex(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // You are in the ascending part of the array
            start = mid + 1;
        } else {
            // You are in the descending part or at the peak
            end = mid;
        }
    }
    // 'start' and 'end' will eventually meet at the peak index
    return start;
}

int main() {
    vector<int> mountain = {0, 2, 10, 5, 2};
    cout << "Peak Index is: " << findPeakIndex(mountain) << endl; 
    // Output: 2 (Value 10 is the peak)
    return 0;
}