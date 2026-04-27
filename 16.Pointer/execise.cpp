// Question Predict Output 

#include <iostream>
#include <vector>
using  namespace std;

int main() {  // assume part to comment 
    int a = 5;   // a = 5 == 100
    int *p = &a; // p = 100 == 500
    int **q = &p; //q = 500 == 700

    cout << *p << endl; // same *p = 100 == 5 
    cout << **q  << endl; // same  ** 500 == 100 == 5
    cout << p << endl; // diff   100
    cout << *q << endl;  // diff   100





    return 0;




}

