#include<iostream>
using namespace std;
main(){
int temperature1;
int temperature2;
cout<<"Enter the temperature city 1";
cin>>temperature1;
cout<<"Enter the temperature city2";
cin>>temperature2;
if(temperature1-temperature2>10){
    cout<<"Difference is too big";
}
else{
    cout<<"Program ends";
}
}