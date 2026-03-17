#include <iostream>
using namespace std;
int main() {
    double number;
    double total = 0; 

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        
        total += number; 
    }

    cout << "The total sum is: " << total << endl;

    return 0;
}