#include <iostream>
#include <string>

using namespace std;


string calculatePoolState(double V, double P1, double P2, double H) {
    
    double waterp1 = P1 * H;
    double waterp2 = P2 * H;
    double totalWater = waterp1 + waterp2;

    if (totalWater <= V) {
        
        int totalPercent = (totalWater / V) * 100;
        int p1Percent = (waterp1 / totalWater) * 100;
        int p2Percent = (waterp2 / totalWater) * 100;

        return "The pool is " + to_string(totalPercent) + "% full. " +
               "Pipe 1: " + to_string(p1Percent) + "%. " +
               "Pipe 2: " + to_string(p2Percent) + "%.";
    } 
    else {
        
        double overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " + 
               to_string(overflow) + " liters.";
    }
}

int main() {
    double V, P1, P2, H;

    
    cout << "Enter Pool Volume (liters): ";
    cin >> V;
    cout << "Enter Pipe 1 Flow Rate (liters/hr): ";
    cin >> P1;
    cout << "Enter Pipe 2 Flow Rate (liters/hr): ";
    cin >> P2;
    cout << "Enter Hours Worker was Absent: ";
    cin >> H;

    // Call the function and print the result
    string result = calculatePoolState(V, P1, P2, H);
    cout << "RESULT: " << result << endl;

    return 0;
}
