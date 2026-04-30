// ptr+1 == 1 intiger add 
// ptr +3 == 3 intiger add


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int a = 10;
    int * ptr = &a;

    cout << ptr << endl;
    ptr = ptr+2; // 2 intiger add === 8 bite mememory

    cout << ptr << endl; // +8

    return 0;
    

}