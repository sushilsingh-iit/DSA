// return type funname (typep1, typep2...){
//  do some work 

#include <iostream>
using namespace std;

// sum of 2 number 

int sum(int a , int b) {
    int s = a + b;
    return s;
}


// min of 2 number

int min (int a , int b) {
    if (a < b) {
        return a;

    }else {
        return b;
    }
}

int main () {

    cout << sum (10 , 5) << endl;
    cout << "min = " << min (5 , 4) << endl;
    // cout << (11+11) << endl; //simple 
    return 0;
}
