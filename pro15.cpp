#include <iostream>
using namespace std;
main()
{
    string name1, name2, name3;
    int age1, age2, age3;

    cout << "Enter name of first brother: "<<endl;
    cin >> name1;
    cout << "Enter age of first brother: "<<endl;
    cin >> age1;

    cout << "Enter name of second brother: "<<endl;
    cin >> name2;
    cout << "Enter age of second brother: "<<endl;
    cin >> age2;

    cout << "Enter name of third brother: "<<endl;
    cin >> name3;
    cout << "Enter age of third brother: "<<endl;
    cin >> age3;

    if (age1 < age2)
    {
        if (age1 < age3)
        {
            cout << name1 << " is youngest"<<endl;
        }
    }
    if (age2 < age1)
    {
        if (age2 < age3)
        {
            cout << name2 << " is youngest"<<endl;
        }
    }
    if (age3 < age1)
    {
        if (age3 < age2)
        {
            cout << name3 << " is youngest"<<endl;
        }
    }
}