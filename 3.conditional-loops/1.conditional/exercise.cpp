// Question - find character lowercase or uppercase
// A to Z ASCII value A is 65 B is 66 Z is 90
// a to z ASCII value a is 97 b is 98 z is 122

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter character :";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "character is lowercase" << endl;
    }else {
        cout << "character is uppercase" << endl;
    }
    return 0;
}