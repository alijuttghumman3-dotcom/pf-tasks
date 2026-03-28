#include <iostream>
using namespace std;
int main() {
    int count;
    int totalsum = 0;

    
    cout << "Enter the number of elements: ";
    cin >> count;

    
    int values[count];

    
    cout << "Enter " << count << " numbers:" << endl;
    for (int index = 0; index < count; index++) {
        cout << "Element " << (index + 1) << ": ";
        cin >> values[index];
    }

    
    for (int index = 0; index <count ; index++) {
        totalsum =totalsum + values[index]; 
    }

    cout << "\n----------------------------" << endl;
    cout << "The total sum is: " << totalsum<< endl;
    cout << "----------------------------" << endl;

    return 0;
}