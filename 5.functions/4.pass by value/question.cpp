// calculate sum of digits of a number 
#include <iostream>
using namespace std;

int sumofdigit (int num ) {
    int digitsum = 0;
    while (num > 0) {
        int lastdigit = num % 10;
        num /= 10;

        digitsum += lastdigit;

    }
    return digitsum;
}

int main () {
    cout << "sum = " << sumofdigit(2356) << endl;
    return 0;
}