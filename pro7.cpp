#include<iostream>
using namespace std;
main(){
string figure;
float a,b,area;
cin>>figure;
if(figure=="square"){
cin>>a;
area=a*a;
}
if(figure=="reactangle"){
cin>>a>>b;
area=a*b;
}
if(figure=="circle"){
cin>>a;
    area=3.14*a*b;
}
if(figure=="Triangle"){
    cin>>a>>b;
area=0.5*a*b;
}
 cout<<"area";
}