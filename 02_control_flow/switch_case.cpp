/*
Topic : switch-case statement
Purpose :
- Learn menu-based decision handling 
- Understand where switch is better than if-else
*/

#include <iostream>
using namespace std;

int main(){
    int choice;

    cout << "MENU" << endl;

    cout << "- - - - - - - - - -" << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "- - - - - - - - - -" << endl;

    cout << "Enter your choice : ";
    cin >> choice;
    
    cout << "- - - - - - - - - -" << endl;

    switch (choice) {
        case 1 : 
            cout << "You chose Addition." << endl;
            break;
        case 2 :
            cout << "You chose Subtraction." << endl;
            break;
        case 3 : 
            cout << "You chose Multiplication." << endl;
            break;
        case 4 : 
            cout << "You chose Division." << endl;
            break;
        default :
            cout << "Invalid choice." << endl;

    }

    return 0;
}