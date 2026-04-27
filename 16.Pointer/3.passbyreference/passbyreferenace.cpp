// refresh

#include <iostream>
#include <vector>
using namespace std;

void ChnageA(int * ptr ) { // pass by refernec using pointer
    *ptr = 20; 

}

int main () {
    int a = 10;
    ChnageA(&a);

    cout << "inside the main fuction  " << a << endl;  // give 20

    return 0;

}
