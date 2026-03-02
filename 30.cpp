#include<iostream>
using namespace std;
main(){
int area;
cout<<"Enter paint area"<<endl;
cin>>area;
int w;
cout<<"Enter width"<<endl;
cin>>w;
int h;
cout<<"Enter height"<<endl;
cin>>h;
int walls;
walls=area/(w*h);
cout<<"Walls painted"<<walls<<endl;
}