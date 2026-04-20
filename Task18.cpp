#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Convert string to lowercase
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Convert from meters³ to target unit³
double convertVolume(double volumeInMeters, const string& unit) {
    if (unit == "millimeters") return volumeInMeters * pow(1000, 3);
    if (unit == "centimeters") return volumeInMeters * pow(100, 3);
    if (unit == "meters") return volumeInMeters;
    if (unit == "kilometers") return volumeInMeters / pow(1000, 3);

    throw invalid_argument("Invalid unit!");
}

// Calculate pyramid volume
double calculatePyramidVolume(double length, double width, double height) {
    return (length * width * height) / 3.0;
}

int main() {
    double l, w, h;
    string targetUnit;

    cout << "Enter Length (meters): ";
    cin >> l;
    cout << "Enter Width (meters): ";
    cin >> w;
    cout << "Enter Height (meters): ";
    cin >> h;
    cout << "Enter Unit (millimeters, centimeters, meters, kilometers): ";
    cin >> targetUnit;

    targetUnit = toLower(targetUnit);

    try {
        double volumeMeters = calculatePyramidVolume(l, w, h);
        double finalVolume = convertVolume(volumeMeters, targetUnit);

        cout << "Volume = " << finalVolume << " cubic " << targetUnit << endl;
    } 
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}