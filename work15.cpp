#include<iostream>
using namespace std;
int main()
{
    int correctpin=1234;
    int choice;
    int pin[3];
    int balance=1000;
    int amount;
    bool login=false;
    for(int i=0; i<3 ; i++)
    {
        cout<<"enter the ATM pin ";
        cin >> pin[i];
        if(pin[i]==correctpin)
        {
            login=true;
            cout<<"LOGIN SUCCESSFULLY\n ";
            break;
        }
        else
        {
            cout<<"Incorrect pin \n";
        }
    }
    if(login==true)
    {
        while(true)
        {
            cout<<"-----ATM-----    \n";
            cout<<"1. Check Balance \n";
            cout<<"2. Deposit Money \n ";
            cout<<"3. Withdraw money\n";
            cout<<"4. Exit \n";
            cout<<"Enter your choice ";
            cin >> choice;
            if(choice==1)
            {
                cout<<"current balance "<<balance<<endl;
            }
            else if(choice==2)
            {
                cout<<"Enter the amount to deposit ";
                cin >> amount;
                balance=amount+balance;
                cout<<"Current Balance "<<balance<<endl;
            }
            else if(choice==3)
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= balance && amount > 0)
                {
                    balance = balance - amount;
                    cout << "Remaining Balance: " << balance << endl;
                }
                else
                {
                    cout << "Insufficient Balance\n";

                }
            }
        
       else if(choice == 4)
            {
                cout << "Thank you for using ATM\n";
                break;
            }
            else
            {
            cout << "Invalid Choice\n";
            } 
        } 
    }  
    else
    {
        cout << "Too many incorrect attempts. Access Denied.\n"; }
    return 0;

    
}
