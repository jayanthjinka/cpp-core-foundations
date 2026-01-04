/*
Topic : Function with Parameters
Purpose :
- Sends values to a function
- Function works using given inputs
*/

#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    add(10, 5);
    return 0;
}
