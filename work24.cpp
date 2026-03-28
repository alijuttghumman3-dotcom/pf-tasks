#include <iostream>


using namespace std;

int main() {
   
    string studentsname[5];

    
    cout << "Enter the names of 5 students:" << endl;
    for (int index= 0; index < 5; index++) {
        cout << "Student " << (index + 1) << ": ";
        
       
        if (index == 0) cin.ignore(); 
        getline(cin, studentsname[index]);
    }

    
    cout << "\n--- List of Students ---" << endl;
    for (int index = 0; index < 5; index++) {
        cout << (index + 1) << ". " << studentsname[index] << endl;
    }

    return 0;
}