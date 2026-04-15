#include <iostream>
using namespace std;

int chnageX(int x) {
    x = 2*x;
    cout << "x = " << x << endl; //this  x value store in fun memory 

}

int main() {
    int x = 5; // this x value store in main memory 
    chnageX(x);

    cout << "x = " << x << endl;
    return 0;
}