// Arithmetic Operator 


// Explanation
// +	 → Adds two numbers
// - 	 → Subtracts one number from another
// *	 → Multiplies two numbers
// / 	 → Divides one number by another (integer division if both are integers)
// % 	 → Gives the remainder of division


#include <iostream>
#include <iomanip> // For setting decimal precision

using namespace std;

int main() {
    int a = 5;
    int b = 10;

    cout << "Values: a = " << a << ", b = " << b << "\n";
    cout << "---------------------------\n";

    cout << "Sum        : " << (a + b) << "\n";
    cout << "Difference : " << (a - b) << "\n";
    cout << "Product    : " << (a * b) << "\n";
    cout << "Modulo     : " << (a % b) << "\n"; 

    // 2. Division (Converted to double to get 0.5)
    cout << "Division   : " << (static_cast<double>(a) / b) << "\n";

    return 0;
}