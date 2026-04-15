#include <iostream>
using namespace std;

int main() {
    int n =10;
    for (int i =1; i<=n; i++) { //outer loop 
        char ch  = 'A';
        for (int j=1; j<=n; j++) { //inner loop
            cout << ch;
            ch = ch + 1 ; // 65 +1 => 66
        }
        cout  << endl;
    }

}
