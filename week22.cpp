#include <iostream>
using namespace std;
int main() {
    int totalnumbers;
    int evennumberscount = 0;
    cout << "Enter the number of elements: ";
    cin >> totalnumbers;
    int numbers[totalnumbers];

    cout << "Enter " << totalnumbers<< " numbers:" << endl;
    for (int position= 0; position<totalnumbers; position++) {
        cout << "Element " << (position + 1) << ": ";
        cin >> numbers[position];
    }

    
    for (int position= 0; position < totalnumbers; position++) {
        if (numbers[position] % 2 == 0) {
            evennumberscount++; 
        }
    }

    
    cout << "\n----------------------------" << endl;
    cout << "Total even numbers: " << evennumberscount << endl;
    cout << "----------------------------" << endl;

    return 0;
}