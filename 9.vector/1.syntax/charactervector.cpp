#include <iostream>
#include <vector>
using namespace std;

int main() { 
    // 1. Define the vector first
    vector<char> ved = {'a', 'b', 'c', 'd'};

    // 2. Use the .size() method on the object 'ved'
    cout << "size of vector: " << ved.size() << endl;

    ved.push_back(25); 

     cout << "a after push back size of vector: " << ved.size() << endl; 

    for (char i : ved) {
        cout << i << endl;
    }

    return 0;
}
