 #include <iostream>

using namespace std;

int main() {
    int totalcustomers;
    int matchingcount = 0;
    char targetLetter;

    
    cout << "Enter the number of customers: ";
    cin >> totalcustomers;

    string customersname[totalcustomers];

    cout << "Enter " << totalcustomers<< " customer names:" << endl;
    cin.ignore(); 
    for (int index = 0; index < totalcustomers; index++) {
        cout << "Customer " << (index + 1) << ": ";
        getline(cin, customersname[index]);
    }

    
    cout << "\nEnter a letter to count: ";
    cin >> targetLetter;

    
    for (int index = 0; index < totalcustomers; index++) {
        
        if (customersname[index][0] == toupper(targetLetter) || customersname[index][0] == tolower(targetLetter)) {
            matchingcount++;
        }
    }

    
    cout << "\n--------------------------------------" << endl;
    cout << "Total names starting with '" << targetLetter << "': " << matchingcount << endl;
    cout << "--------------------------------------" << endl;

    return 0;
}

