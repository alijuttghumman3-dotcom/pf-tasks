#include <iostream>
#include <string>

using namespace std;

int main() {
    int totalstudents;

    cout << "Enter the number of students: ";
    cin >> totalstudents;

    
    string studentsnames[totalstudents];

   
    cout << "Enter " << totalstudents << " student names:" << endl;
    cin.ignore(); 
    for (int index = 0; index < totalstudents; index++) {
        cout << "Student " << (index + 1) << ": ";
        getline(cin, studentsnames[index]);
    }

    
    for (int index = 0; index < totalstudents - 1; index++) {
        for (int position = 0; position < totalstudents - index - 1; position++) {
            if (studentsnames[position] > studentsnames[position + 1]) {
                string temp = studentsnames[position];
                studentsnames[position] = studentsnames[position+ 1];
                studentsnames[position + 1] = temp;
            }
        }
    }

   
    cout << "\n--- Students in Alphabetical Order ---" << endl;
    for (int index = 0; index < totalstudents ; index++) {
        cout << (index + 1) << ". " << studentsnames[index] << endl;
    }

    return 0;
}