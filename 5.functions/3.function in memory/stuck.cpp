#include <iostream>
using namespace std;

void fun() {
    int x = 25;
    cout << "x = " << x << endl;


}

int main () {
    fun ();

    cout << x << endl; // five error becouse x exited only fun function 
    return 0;

}