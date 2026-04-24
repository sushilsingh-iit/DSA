#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> ved;
    cout << "Intial size of " << ved.size() << endl;
    ved.push_back(25);
    ved.push_back(35);
    ved.push_back(43);
    ved.push_back(45); // this value is target to delele it 
   
    cout << "after push back size " << ved.size() << endl;
    ved.pop_back(); // 45 is deleting 

    cout << "size after pop back  " << ved.size() << endl;

    for (int val : ved ) { // for each loop 
        cout << val << endl;
    }

    return 0;

}