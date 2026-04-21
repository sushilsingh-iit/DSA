#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    // Base case: 0! is 1
    if (n == 0) {
        return 1;
    }
    // Recursive step: n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int number = 5; 
    
    // Check for negative input (factorial isn't defined for negative integers)
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}