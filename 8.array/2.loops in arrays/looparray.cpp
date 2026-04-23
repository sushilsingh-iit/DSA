#include <iostream>
using namespace std;

int main ( ){
    int mark [10] = { 100, 90, 80,70, 60, 50, 40, 30, 20, 10};
    cout << sizeof(mark) << endl; // give 4*10  = 40
    for (int i =0 ; i<10 ; i++ ) {
    cout << mark[i] << endl; 
        

    }
    cout << sizeof(mark[10]) << endl; // give value of 4

    return 0;

}