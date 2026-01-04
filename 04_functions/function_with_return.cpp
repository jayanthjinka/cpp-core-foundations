/*
Topic : Function with Return Value
Purpose :
- Function sends a result back
- Returned value can be used in main
*/

#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int result = square(4);
    cout << "Square: " << result << endl;
    return 0;
}
