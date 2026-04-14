// vote condition soluiton 
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age :";
    cin >> age;

    if(age >= 18 ) {
        cout << "you are eligible for vote\n";
    
    }else {
        cout << "you are not eligible for vote\n";

    }
    return 0;

}