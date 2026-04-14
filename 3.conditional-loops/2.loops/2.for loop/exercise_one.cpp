// Question - sum of all number from 1 to n 

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    // int i = 1;
    int oddsum = 0;
    // print only odd number 
    for (int i=1; i<=n; i++) {
        if(i%2 != 0 ) {
            oddsum += i;
            // cout << i << " ";
            // cout << "oddsum = " << oddsum << endl;
        }
    }
    cout << "oddsum = " << oddsum << endl;
    cout << endl;
    return 0;

}