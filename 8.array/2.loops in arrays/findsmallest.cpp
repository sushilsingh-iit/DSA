#include <iostream>
#include <climits> // Required for INT_MAX
using namespace std;

int main() {
    int nums[] = {7, 6, 5, 4, 3, 2};
    int size = 6;

    int smallest = INT_MAX;
    
    for (int i = 0; i < size; i++) {  // min or max
        if (nums[i] < smallest) {
            smallest = nums[i]; // Use '=' to assign the new value

            // smallest = min(num[i]) , smallest ;   short form this cod e
        }
    }

    cout << "smallest " << smallest << endl;
    return 0;
}