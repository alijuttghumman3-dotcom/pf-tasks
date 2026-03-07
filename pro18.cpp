#include<iostream>
using namespace std;
main()
{
    string password,mypassword;
    cout<<"enter your password ";
    cin>>mypassword;
    password="Pass123";
    if(mypassword==password)
    cout<<"you crack the code! ";
    else
    cout<<"try again";
}