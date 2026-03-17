#include<iostream>
using namespace std;
int main(){
    char choice = 'y';
    while (choice != 'n' && choice != 'N')
     {
        cout << "I am happy!" << endl;
        cout << "Enter your choice: (y/n): ";
        cin >> choice;
    }
    return 0;
}