#include<iostream>
using namespace std;
int main(){
    double balance = 1000.0;
    int pin, choice, amount;
   for( int i=1; i<=3; i++){
    cout<<"Enter your PIN: ";
    cin>>pin;
    if(pin == 1234){
        cout<<"Login successful!"<<endl;
        break;
    }
    else{
        cout<<"Incorrect PIN. Try again."<<endl;
    }
    if(i == 3){
        cout<<"Too many attempts. Exiting."<<endl;
        return 0;
    }
}

    for(int i=1; i<=5; i++){
        cout<<endl<<"---- ATM MENU ----"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"Your balance is: $"<<balance<<endl;
        }
        else if(choice == 2){
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            balance += amount; //balance = balance + amount;
            cout<<"Deposit successful! New balance: $"<<balance<<endl;
            break;
        }
        else if(choice == 3){
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount > balance){
                cout<<"Insufficient funds!"<<endl;
            }
        
                else{
                    balance -= amount; //balance = balance - amount;
                    cout<<"Withdrawal successful! New balance: $"<<balance<<endl;
                    break;
                }

            }
            
            if(choice == 4){
                cout<<"Thank you for using the ATM. Goodbye!"<<endl;
                return 0;
            }
            else{
                cout<<"Invalid choice. Please try again."<<endl;
            }
    

}
            return 0;
        }
    