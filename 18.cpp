#include<iostream>
using namespace std;
main(){
float vegetable_price;
cout<<"Ente vegetable price"<<endl;
cin>>vegetable_price;
float fruit_price;
cout<<"Enter fruit price"<<endl;
cin>>fruit_price;
int total_kgs_of_vegetables;
cout<<"Enter total kilograms of vegetables"<<endl;
cin>>total_kgs_of_vegetables;
int total_kgs_of_fruits;
cout<<"Enter total kilograms of fruits"<<endl;
cin>>total_kgs_of_fruits;
float total_earning;
total_earning=(vegetable_price*total_kgs_of_vegetables)+(fruit_price*total_kgs_of_fruits)/1.94;
cout<<"Total earning in rupees"<<total_earning<<endl;
}