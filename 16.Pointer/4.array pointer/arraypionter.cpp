#include <iostream>
#include <vector>
using namespace std;


// array pointer also calls constant pointer

int main() {
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;   // pointer 
    cout << *arr << endl;   // pointer  => 1

    return 0;

}