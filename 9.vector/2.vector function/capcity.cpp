#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(3);
 
    cout << vec.size() << endl;   // is 3 
    cout << vec.capacity() << endl; //  is  4

    return 0;


}
