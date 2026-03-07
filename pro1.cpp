
#include <iostream>
using namespace std;
int main()
{
    string country;
    int price,dis;
    cout << "Enter the country : ";
    cin >> country;
    cout << "Enter the ticket price : ";
    cin >>price;

    if (country == "ireland")
    {
        dis =price * 0.10;
        price = price - dis;
        cout << "ticket price is : " << price << endl;
    }

    if (country != "ireland")
    {
        dis = price * 0.05;
        price = price - dis;
        cout << "ticket price is : " << price << endl;
    }  
    return 0;
}
