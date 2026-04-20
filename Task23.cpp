#include <iostream>
#include <limits>

using namespace std;

// Determine base interest rate
float getInterestRate(float balance) 
{
    if (balance < 10000)
        return 0.05;
    else if (balance <= 50000)
        return 0.07;
    else
        return 0.10;
}

// Calculate balance with compound interest
float computeUpdatedBalance(float initialBalance, int yearsActive) 
{
    float rate = getInterestRate(initialBalance);

    // Loyalty bonus
    if (yearsActive >= 3) 
    {
        rate += 0.02;
    }

    float updatedBalance = initialBalance;

    // Apply compound interest yearly
    for (int i = 0; i < yearsActive; i++) 
    {
        updatedBalance += updatedBalance * rate;
    }

    return updatedBalance;
}

int main() 
{
    float currentBalance;
    int accountYears;

    cout << "Enter current balance: ";
    cin >> currentBalance;

    // Input validation for balance
    if (!cin || currentBalance < 0) 
    {
        cout << "Invalid balance entered!" << endl;
        return 1;
    }

    cout << "Enter number of years the account has been active: ";
    cin >> accountYears;

    // Input validation for years
    if (!cin || accountYears < 0) 
    {
        cout << "Invalid years entered!" << endl;
        return 1;
    }

    float finalAmount = computeUpdatedBalance(currentBalance, accountYears);

    cout << "Updated balance after " << accountYears 
         << " years: " << finalAmount << endl;

    return 0;
}