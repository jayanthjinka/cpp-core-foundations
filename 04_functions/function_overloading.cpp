/*
Topic : Function Overloading
Purpose :
- Same function name used for different inputs
- Helps write cleaner and readable code
*/

#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << multiply(3, 4) << endl;
    cout << multiply(2.5, 4.0) << endl;
    return 0;
}
