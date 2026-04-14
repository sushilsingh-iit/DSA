// make a guess no loop using do while loop 

#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    do {
        cout << "Guess the secret number (1-10): ";
        cin >> guess;

        if (guess != secret) {
            cout << "Wrong! Try again." << endl;
        }

    } while (guess != secret); // Keep looping as long as the guess is WRONG

    cout << "Congratulations! You found the secret number." << endl;

    return 0;
}