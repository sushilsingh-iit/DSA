// Question - sum of number from 1 to n

#include <iostream>
using namespace std;

int main() {
    int n =100;
    int i = 1;
    int sum = 0;

    for (int i=1; i<=n; i++ ) {
        sum += i; // means sum = sum + i
        if (i == 5 ) { // 1+2+3+4+5 => 15 
            break;  // keyword 
        }
    }

    cout << "sum = " << sum << endl;
    return 0;
}