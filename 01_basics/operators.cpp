/*
Topic : Operators in C++
Purpose :
- Understand different types of Operators
- Learn how to use Arithmetic, Relational and Logical Operators
- Observe use cases of Operators in C++
*/

#include <iostream>
using namespace std;

int main(){
    int a = 24;
    int b = 8;

    cout << "Addition : " << (a + b) << endl;
    cout << "Subtraction : " << (a - b) << endl;
    cout << "Multipilication : " << (a * b) << endl;
    cout << "Division : " << (a / b) << endl;
    cout << "Modulus : " << (a % b) << endl;

    cout << "- - - - - - - - - -" << endl;
    
    cout << "Is a is greater than b? : " << (a > b) << endl;
    cout << "Is a is less than b? : " << (a < b) << endl;
    cout << "Is a is equal to b? : " << (a == b) << endl;
    cout << "Is a is not equal to b? : " << (a != b) << endl;

    cout << "- - - - - - - - - -" << endl;

    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b < 0) : " << (a >0 || b < 0) << endl;
    
    return 0;
}