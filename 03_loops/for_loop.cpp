/*
Topic : for loop
Purpose : 
- Used when we know how many times the loop should run
- Often used for counting and simple calculations
*/

#include <iostream>
using namespace std;

int main(){
    int sum = 0;

    for(int i =1;i <= 10;i++){
        sum += i;
    }

    cout << "Sum of numbers from 1 to 10 : " << sum << endl;
    
    return 0;
}