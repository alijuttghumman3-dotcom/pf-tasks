#include <iostream>

using namespace std;

void calculateProjectTime(int requiredHours, int totalDays, int workerCount) 
{
    // Deduct 10% of days for breaks/inefficiency
    double effectiveDays = totalDays * 0.90;

    // Each worker works 10 hours per day
    int totalWorkHours = effectiveDays * workerCount * 10;

    if (totalWorkHours >= requiredHours) 
    {
        int extraHours = totalWorkHours - requiredHours;
        cout << "Yes! " << extraHours << " hours left." << endl;
    }
    else 
    {
        int shortageHours = requiredHours - totalWorkHours;
        cout << "Not enough time! " << shortageHours << " hours needed." << endl;
    }
}

int main() 
{
    int requiredHours;
    int availableDays;
    int numberOfWorkers;

    cout << "Enter required work hours: ";
    cin >> requiredHours;

    cout << "Enter available days: ";
    cin >> availableDays;

    cout << "Enter number of workers: ";
    cin >> numberOfWorkers;

    calculateProjectTime(requiredHours, availableDays, numberOfWorkers);

    return 0;
}
