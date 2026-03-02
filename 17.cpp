#include<iostream>
using namespace std;
main(){
string mn;
cout<<"Enter movie name"<<endl;
cin>>mn;
float atp;
cout<<"Enter adult ticket price"<<endl;
cin>>atp;
float ctp;
cout<<"Enter child ticket price"<<endl;
cin>>ctp;
float noats;
cout<<"Enter number of adult tickets sold"<<endl;
cin>>noats;
float nocts;
cout<<"Enter number of child tickets sold"<<endl;
cin>>nocts;
float pocda;
cout<<"Enter percentage of charity donation amount"<<endl;  
cin>>pocda;
cout<<"---------------------------------------------------"<<endl; 
int tagfts;
tagfts=(atp*noats)+(ctp*nocts);
cout<<"Total amount generated from ticket sales"<<tagfts<<endl;
int dtc;
dtc=(tagfts*pocda)/100;
cout<<"Donation to charity"<<dtc<<endl;
int raad;
raad=tagfts-dtc;
cout<<"Remaining amount after donation"<<raad<<endl;
}

