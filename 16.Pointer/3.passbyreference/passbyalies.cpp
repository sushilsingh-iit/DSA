#include <iostream>
#include <vector>
using namespace std;

void changeA(int  &b){ // pass by alies
    b = 20;
};

int main() {
    int a = 10 ;
    changeA(a);

    cout << "inside the function " << a << endl;  // give 20 becouse pass by the value alies 
    return 0;
}