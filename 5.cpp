#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the student's name"<<endl;
cin>>name;
float marksA;
cout<<"Enter matric marks"<<endl;
cin>>marksA;
float marksB;
cout<<"Enter inter marks"<<endl;
cin>>marksB;
float marksC;
cout<<"Enter ECAT marks"<<endl;
cin>>marksC;
float percentage=(marksA/1100)
*10+(marksB/1200)*40+(marksC/400)*50;
cout<<"The percentage is" <<percentage <<endl; 
}

