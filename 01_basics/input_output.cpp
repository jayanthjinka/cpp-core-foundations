/*
Topic : Input and Output in C++
Purpose :
- Learn how to take input from user
- Understand cin and cout
- Observe basic input and output operations
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    float salary;

    cout << "Enter your age : ";
    cin >> age;

    cout << "Enter your salary : ";
    cin >> salary;

    cout << "- - - - - - - -" << endl;

    cout << "Entered age : " << age << " and salary : " << salary << endl;

    return 0;
}