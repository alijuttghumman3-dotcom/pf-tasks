#include <iostream>

using namespace std;

// Function to calculate final salary
float computeFinalSalary(float baseSalary, int performanceRating, int experienceYears) 
{
    float bonusRate;

    // Determine bonus based on performance
    if (performanceRating >= 90) 
    {
        bonusRate = 0.20;
    }
    else if (performanceRating >= 75)   // no need for <= 89
    {
        bonusRate = 0.10;
    }
    else 
    {
        bonusRate = 0.05;
    }

    // Extra bonus for experienced employees
    if (experienceYears >= 5) 
    {
        bonusRate += 0.05;
    }

    float bonusAmount = baseSalary * bonusRate;
    return baseSalary + bonusAmount;
}

int main() 
{
    float baseSalaryInput;
    int performanceScoreInput;
    int experienceInput;

    cout << "Enter Base Salary: ";
    cin >> baseSalaryInput;

    cout << "Enter Performance Score (0-100): ";
    cin >> performanceScoreInput;

    cout << "Enter Years of Experience: ";
    cin >> experienceInput;

    float finalSalary = computeFinalSalary(
        baseSalaryInput, 
        performanceScoreInput, 
        experienceInput
    );

    cout << "Final Salary: $" << finalSalary << endl;

    return 0;
}