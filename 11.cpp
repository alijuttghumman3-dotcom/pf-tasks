#include<iostream>
using namespace std;
main(){
int pop;
cout<<"Enter the current world pop"<<endl;
cin>>pop;
int n;
cout<<"Enter the monthly birth rate"<<endl;
cin>>n;
int fut_pop=pop+(n*360);
cout<<"Population in three decades will be "<<fut_pop<<endl;
}
