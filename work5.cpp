#include <iostream>
using namespace std;

int main() {
    int totalelements;
    cout << "Enter the number of elements: ";
    cin >> totalelements;

    int uniquenumbers[100];  // array to store numbers
    int count = 0; // number of unique numbers stored

    for (int i = 0; i < totalelements; i++) {
        int inputvalue;
        cout << "Enter number " << i + 1 << ": ";
        cin >> inputvalue;

        bool alreadyEntered = false;

        
        for (int j = 0; j < count; j++) {
            if (uniquenumbers[j] == inputvalue) {
                alreadyEntered = true;
                break;
            }
        }

        if (alreadyEntered) {
            cout << "Already Entered" << endl;
        } else {
            uniquenumbers[count] = inputvalue;
            count++;
        }
    }

    cout << "\nUnique numbers entered: ";
    for (int i = 0; i < count; i++) {
        cout << uniquenumbers[i] << " ";
    }

    return 0;
}