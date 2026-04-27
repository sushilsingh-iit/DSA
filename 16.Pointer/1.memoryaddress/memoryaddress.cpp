// Pointer 

// Special variable that store address of other variable 


#include <iostream>
#include <vector>
using namespace std;

int main () {
    int a  = 10 ;
    int* ptr = &a;

    float  price  = 100.1;
    float* atr = &price;



    cout << ptr << endl; // addresss of ptr 
    cout << &a << endl;  // address of a 
    cout << &ptr << endl;   // address of prt 

    cout << &price << endl;  // address of float



    cout << endl; 

    return 0;



}