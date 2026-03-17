#include <iostream>
using namespace std;

int main() {

  int num1, num2, smaller, hcf, lcm;

  
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 < num2) {
        smaller = num1;
    } else {
        smaller = num2;
    }

  
    for (int i = smaller; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; 
            break;
        }
    }

 
    lcm = (num1 * num2) / hcf;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << hcf << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}