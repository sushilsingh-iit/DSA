#include <iostream>
using namespace std;

int printhello( ) {
    cout << "hello"<< endl;
    return 3;
}

int main() {
    // function call 

    int val = printhello (); // function value store in variable 
    cout << "val = " << val << endl;

    return 0;
}