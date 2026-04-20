#include<iostream>
#include<cmath>
using namespace std;
main(){
cout<<"Enter the distance froom yhe base of tree";
int distance;
cin>>distance;
cout<<"Enter the angle of elevation in degrees";
int angle;
cin>>angle;
float radian=0.0174*angle;
float height;
height=distance*tan(radian);
cout<<"The height of tree is"<<height;
}