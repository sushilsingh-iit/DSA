#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i=0; i<n; i++) { //n
        for (int j =0; j<i+1; j++) { //i+1
            cout << (i+1) << " ";
        }
        cout << endl;
    }
    return 0;
}


// triagle character print 

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     char ch = 'A';

//     for (int i = 0; i < n; i++) {
//         // Corrected: Declare j and link condition to i
//         for (int j = 0; j <= i; j++) {
//             // Corrected: Cast to char to print 'A', 'B', etc.
//             cout << (char)(ch + i) << " "; 
//         }
//         cout << endl;
//     }

//     return 0;
// }