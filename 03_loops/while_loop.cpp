/*
Topic : while loop
Purpose : 
- Use when number of iterations is not known
- Common in input related programs
*/

#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter number : " ;
    cin >> number;

    while (number != 0){
        cout << "You entered : " << number <<endl;
        cin  >> number;
    }

    cout << "Loop stopped." << endl;
    return 0;
}