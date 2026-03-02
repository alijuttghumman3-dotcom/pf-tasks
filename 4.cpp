#include<iostream>
using namespace std;
main(){
float charge;
cout<<"Enter the charge(Q) in coloumbs"<<endl;
cin>>charge; 
float time;
cout<<"Enter the time(t) in seconds"<<endl;
cin>>time; 
float current=charge/time;
cout<<"The current(I)is =" <<current<<endl;
}