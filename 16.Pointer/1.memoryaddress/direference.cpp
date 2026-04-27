#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a =10;
    int* ptr = &a;

    int** parptr = &ptr; // parent ptr 


    cout << *(&a) << endl;  // return 10
    cout << *(ptr) << endl;  // return 10


    cout << *(parptr) << endl;  // address same 
    cout << (ptr) << endl;      // address same 

    cout << ** (parptr) << endl; // double direfenrenace answer give 10

    

    return 0;



}
