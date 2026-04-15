// calsulate n fatorial 

#include <iostream>
using namespace std;

int factN(int n) {
    int fact = 1;

    for (int i=1; i<=n; i++) {
        fact = fact * i;
        // fact *= i; // simple short form 
    }
    return fact;
}

int main() {
    cout << factN(4) << endl;
    cout << factN(5) << endl;

    return 0;
}
