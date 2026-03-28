#include<iostream>
using namespace std;
main(){
 int coins[4];
 double values[4]={0.25,0.10,0.05,0.01};
 double totaldue;
 cout <<"Enteer quarters";
 cin>>coins[0];
 cout<<"Enter dimes";
 cin>>coins[1];
 cout<<"Enter nickels";
 cin>>coins[2];
 cout<<"Enter pennies";
 cin>>coins[3];
 cout<<"Enter total amount due:$";
 cin>>totaldue;
 double totalmoney=0;
 for (int i=0; i<4;i++){
    totalmoney+=coins[i]*values[i];
 }
 cout<<"Can you pay the amount";
 if (totalmoney>=totaldue)
 cout<<"Yes";
 else
 {
 cout<<"No";
 }
}