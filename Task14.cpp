#include <iostream>
using namespace std;


bool ISSymmetrical(int num) {
    
    int original = num;
    int overturn = 0;
    int remaind;

    
    while (num != 0) {
        remaind = num % 10;          
        overturn = overturn * 10 + remaind; 
        num = num / 10;               
    }


    if (original == overturn) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int userInput;

    cout << "Enter a three digit  number: ";
    cin >> userInput;

    
   
        if (ISSymmetrical(userInput)) {
            cout << userInput << " is symmetrical! (True)" << endl;
        } else {
            cout << userInput << " is NOT symmetrical. (False)" << endl;
        }
    

    return 0;
}