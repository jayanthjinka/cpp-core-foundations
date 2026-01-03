/*
Topic : Nested Loop
Purpose : 
- Understand loop inside loop
- Best for patterns understanding
*/

#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 5;j++){
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}