#include <iostream>
using namespace std;
 
int main() {
    int n = 4;

    for (int i=1; i<=n; i++ ) {      // outer loop (rows)
        for(int j =1; j<=n; j++) {   // inner loop (columns)
                cout << j << " ";    // for space in output
        }                            // closed the inner loop
        cout << endl;                // ADDED: Moves to the next line after each row
    }                                // ADDED: This was missing in your code!

    return 0;
}