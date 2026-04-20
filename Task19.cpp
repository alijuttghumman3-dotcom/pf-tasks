#include <iostream>
#include <cctype>   // for toupper()

using namespace std;

// Function to get tax rate based on vehicle category
float getTaxRate(char category) {
    switch (category) {
        case 'M': return 0.06;
        case 'E': return 0.08;
        case 'S': return 0.10;
        case 'V': return 0.12;
        case 'T': return 0.15;
        default:  return -1; // invalid
    }
}

// Function to get vehicle name
string getVehicleName(char category) {
    switch (category) {
        case 'M': return "Motorcycle";
        case 'E': return "Electric";
        case 'S': return "Sedan";
        case 'V': return "Van";
        case 'T': return "Truck";
        default:  return "Unknown";
    }
}

// Function to calculate final price
float calculateFinalPrice(float basePrice, float taxRate) {
    return basePrice + (basePrice * taxRate);
}

int main() {
    float basePrice;
    char vehicleCode;

    cout << "Enter vehicle price: ";
    cin >> basePrice;

    cout << "Enter vehicle code (M, E, S, V, T): ";
    cin >> vehicleCode;

    vehicleCode = toupper(vehicleCode); // normalize input

    float taxRate = getTaxRate(vehicleCode);

    if (taxRate == -1) {
        cout << "Invalid vehicle type entered!" << endl;
        return 1;
    }

    string vehicleName = getVehicleName(vehicleCode);
    float finalPrice = calculateFinalPrice(basePrice, taxRate);

    cout << "Vehicle Type: " << vehicleName << endl;
    cout << "Final Price (including tax): $" << finalPrice << endl;

    return 0;
}