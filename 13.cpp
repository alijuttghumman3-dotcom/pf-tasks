#include<iostream>
using namespace std;
int main(){
int initial_velocity;
cout<<"Enter initial velocity:"<<endl;
cin>>initial_velocity;
int acceleration;
cout<<"Enter acceleration:"<<endl;
cin>>acceleration;
int time;
cout<<"Enter time:"<<endl;
cin>>time;
int final_velocity;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"Final velocity: "<<final_velocity<<endl;
return 0;
}

