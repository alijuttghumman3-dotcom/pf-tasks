#include <iostream>
#include <string>

using namespace std;

// Function to convert number [1-99] to text
string numberToText(int num) {
    string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", 
                      "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                      "Seventeen", "Eighteen", "Nineteen"};
    
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 20) {
        return units[num];
    } else {
        // Concatenates tens and units (e.g., 25 -> "Twenty" + "Five")
        return tens[num / 10] + units[num % 10];
    }
}

int main() {
    int input;
    cout << "Enter a number (1-99): ";
    cin >> input;

    if (input >= 1 && input <= 99) {
        cout << numberToText(input) << endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 99." << endl;
    }

    return 0;
}