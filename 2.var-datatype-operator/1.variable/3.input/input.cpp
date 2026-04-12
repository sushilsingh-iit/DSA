#include <iostream>
using namespace std;

int main () {
    int age;
    double price;

    // Ask for Age first
    cout << "Enter The Age: ";
    cin >> age;  // >> this is overloaded chapter 

    // Then ask for Price
    cout << "Enter the price: ";
    cin >> price;

    cout << "-------------------" << endl;
    cout << "Your Age Is : " << age << endl;
    cout << "Your Price : " << price << endl;
    
    return 0;
}