#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter character :";
    cin >> ch;
    if (ch >= 97 && ch <= 122) { // a is 97 and z is 122 as ascii value 
        cout << "character is lowercase" << endl;
    }else {
        cout << "character is uppercase" << endl;
    }
    return 0;
}