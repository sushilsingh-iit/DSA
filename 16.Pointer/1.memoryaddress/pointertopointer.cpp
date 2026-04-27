#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    int** parentptr = &ptr;

    cout << &ptr << endl;
    cout << parentptr << endl;


    cout << endl;

    return 0;

}