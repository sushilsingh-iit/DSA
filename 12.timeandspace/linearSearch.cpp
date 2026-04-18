#include <iostream>
using namespace std;
int main ( ) {
// 1. the data
    int arr[] = {10,20,30,40,50};
    int target = 30;

    // 2 . the search loop 
    for (int i = 0 ; i<5; i++){
        if (arr[i] == target ){
            cout << "index is found:" << i << endl;
            break;
        }
    }
    return 0;
}