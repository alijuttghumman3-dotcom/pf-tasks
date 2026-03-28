#include<iostream>
using namespace std;
main(){
    float resistancevalues[3];
    float totalresistance=0;
    cout<<"Enter Three Resistor one Per Line : "<<endl;
    for(int i =0 ; i<3 ; i++){
        cin>>resistancevalues[i];
        totalresistance+=resistancevalues[i];
    }
    cout<<"Total Resistance is : "<<totalresistance;
}