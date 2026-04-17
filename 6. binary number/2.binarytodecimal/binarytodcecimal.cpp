// binary to decimal 
#include <iostream>
using namespace std;

int binarytoDecimal (int binaryNum) {
    int ans = 0 , pow = 1;

    while (binaryNum > 0) {
        int rem = binaryNum % 10;
        ans += rem * pow;

        binaryNum  /= 10;
        pow += 2;

    }

    return ans; // decimal form

}

int main() {

    
    cout << binarytoDecimal(1010) << endl; // 10


    return 0;
}