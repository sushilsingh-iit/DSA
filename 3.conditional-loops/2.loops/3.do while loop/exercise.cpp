// Question - check if a number is prime or not 
#include <iostream>
using namespace std;

int main() {
     int n =11;
     bool isprime = true;

     for (int i = 2; i <= n-1; i++ ) {
        if (n % i == 0 ) { //non prime 
            isprime = false;
            break;
        }
     }

    if (isprime == true ) {
        cout << "prime no " << endl;

    }else {
        cout << "not prime no " << endl;
    }
   return 0;

}