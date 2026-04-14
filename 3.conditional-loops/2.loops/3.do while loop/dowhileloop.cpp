// The do-while loop is a "post-test" loop. This means the code inside the loop always runs at least once,
// even if the condition is false from the very beginning.

// In a regular while loop, the computer checks the door before entering.
// In a do-while loop, the computer enters the room first and then checks the exit condition.


#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i = 1;
    do {
        cout << i << " ";
        i ++;
    }while (i <= n);

    cout << endl;
    return 0;

}