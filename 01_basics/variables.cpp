/*
Topic : Variables in C++
Purpose : 
- Understand what variables are
- Learn variables declaration and initialization
- Observe how values are stored and changed
*/

#include <iostream>
using namespace std;

int main(){
    // Declaration and Initialization of variables
    int age = 20;
    float height = 5.5f;
    char name_initial = 'J';

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Name Initial: " << name_initial << endl;

    cout << "- - - - - - - -" << endl;

    // Changing variable values
    age = 21;
    height = 5.6f;
    name_initial = 'M';

    cout << "Updated Age: " << age << endl;
    cout << "Updated Height: " << height << endl;
    cout << "Updated Name Initial: " << name_initial << endl;

    return 0;
}