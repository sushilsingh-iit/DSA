#include <iostream>
#include <climits>

using namespace std;

int main () {
    int nums[] = {7, 6, 5, 4, 3, 2};
    int size = 6;

    int largest = INT_MIN;

    for (int i=0; i<size; i++) {
        if (nums[i] > largest) {
            largest = nums[i] ;



        }

    }
    cout << "largest " << largest << endl;
    return 0;

}
