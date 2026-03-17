#include<iostream>
using namespace std;

int main() {           
    int table;
    cout << "Enter the number to print its multiplication table: ";
    cin >> table;

    for(int i = 1; i <= 10; i++) {
        int multiply = table * i;
        cout << table << " x " << i << " = " << multiply << endl;
    }

    return 0;
}                       