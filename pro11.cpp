
#include <iostream>
using namespace std;
main()
{
    int bill, dis;
    cout << "Enter the Bill : ";
    cin >> bill;
    if (bill <= 5000)

    {
        dis = bill * 0.5;
        cout << "the discounted bill is:" << dis;
    }
    if (bill > 5000)

    {
        dis = bill * 0.10;
        cout << "the discount bill is " << dis;
    }
}
