// copy of argumement is passed to function

#include <iostream>
using namespace std;

int sum(int a , int b) {
    a = a + 10; // 15  
    b = b + 10; //14
    return a+b; //29

}

int main() {
    int a = 5 , b = 4;
    cout << sum(a,b) << endl;
    cout  << a << endl; // a value  is 5  that is called the pass the value 
    cout  << b << endl; // b value is 4   that is called the pass the value
    return 0;
}

