#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
   

    cout << *arr << endl; // 1
    cout << *(arr+1) << endl; // update 4 bite means print 2
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;
    return 0;

}