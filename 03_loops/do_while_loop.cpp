/*
Topic : do-while loop
Purpose : 
- Used when code must execute at least once
- Common in menu related programs
*/

#include <iostream>
using namespace std;

int main(){
    int choice;

    do {
        cout << "\nMenu" << endl;
        cout << "- - - - - - - - - -" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Say Bye" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;
        cout << "- - - - - - - - - -" << endl;

        if(choice == 1)
            cout << "Hello!" << endl;
        else if(choice == 2)
            cout << "Bye!" << endl;    
    } while(choice != 0);

    return 0;
}