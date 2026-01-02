/*
Topic : if-else Statement
Purpose : 
- Understand conditional execution
- Learn how decisions are made in the program
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;

    cout << "- - - - - - - - - -" << endl;
    
    if(age >= 18){
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}