#include<iostream>
using namespace std;
main(){
int imp;
cout<<"Enter imposters"<<endl;
cin>>imp;
int players;
cout<<"Enter players"<<endl;
cin>>players;
float chance;
chance=100*(imp/players);
cout<<"Chance"<<chance<<endl;
}
