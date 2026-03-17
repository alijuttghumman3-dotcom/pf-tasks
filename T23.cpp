#include<iostream>
using namespace std;

main()
{
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    float per1, per2, per3, per4, per5;
    int i = 1;
cout<<"Please Enter Number count : ";
    cin >> n;

    while(i <= n)
    {
        cout<<"Enter A Number : ";
        cin >> num;

        if(num >= 1 && num <= 199)
        {
            p1++;
        }
        else if(num <= 399)
        {
            p2++;
        }
        else if(num <= 599)
        {
            p3++;
        }
        else if(num <= 799)
        {
            p4++;
        }
        else
        {
            p5++;
        }

        i++;
    }

    per1 = p1 * 100.0 / n;
    per2 = p2 * 100.0 / n;
    per3 = p3 * 100.0 / n;
    per4 = p4 * 100.0 / n;
    per5 = p5 * 100.0 / n;
cout<<"\n OUTPUT\n";
    cout << per1 << "%" << endl;
    cout << per2 << "%" << endl;
    cout << per3 << "%" << endl;
    cout << per4 << "%" << endl;
    cout << per5 << "%" << endl;
}