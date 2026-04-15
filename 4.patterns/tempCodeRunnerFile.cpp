#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i=0; i<n; i++) { //n
        for (int j =0; j<i+1; j++) { //i+1
            cout << "* "; // put space if you want wnat space 
        }
        cout << endl;
    }
    return 0;
}