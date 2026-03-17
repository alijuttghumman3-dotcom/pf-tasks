#include<iostream>
using namespace std;    
int main(){
  int number=0;
    cout<<"Enter a number: ";
    cin>>number;
    while(number <= 0){
            cout<<"Error: " <<number<<"is not a positive number. "<<endl;
            cout<<"Please enter a positive number: ";
            cin>>number;
        }
    
    cout<<"Program Ends "<<endl;
    return 0;

}