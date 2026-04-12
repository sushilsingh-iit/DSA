// unary - un mean one like binary me bi ka matalb hai two 
// Increment ++ // a++ post increament operator // ++a pre increment operator 
// Decrement -- 


//  a = a + 1 == a++
// a++ mean pahle kaam fir update 
// ++a mean pahle update fir kaam

//  a = a -1 == a--
// a-- pahle kaam fir update 
// --a pahle update fir kaam 


#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int c = 20;

    int d = ++c; // update ; kaam 
    cout << " d = " << d << endl; // 21
    cout << " c = " << c << endl; // 21

    int b = a++; // kaam ; update
    cout <<"b = " <<  b << endl; // 10 
    cout << "a = " << a << endl; // 11

    int x = 10;
    int y = x--; // kaam ; update 
    cout << "y = " << y << endl; // 10
    cout << "x = " << x << endl; // 9


    return 0;

}

