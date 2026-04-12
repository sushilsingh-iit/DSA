// type casting - coverting data from one type to another 
// coverssion - implicit 
// casting - explicit = gernally big to convert small data 
#include <iostream>
using namespace std;

int main ( ) {
    
    char grade = 'A'; // assci value 65

  

    double price = 100.99;

    int value = grade;
    int newprice = (int)price;

    cout << grade << endl;
    cout << value << endl;
    cout << newprice << endl;

    return 0;

}