#include<iostream>
using namespace std;
main(){
int num;
int no1;
int no2;
int no3;
int no4;
int sum;
cout<<"Enter four digit number"<<endl;
cin>>num;
no1=num%10;
num=num/10;
no2=num%10;
num=num/10;
no3=num%10;
num=num/10;
no4=num%10;
num=num/10;
sum=no1+no2+no3+no4;
cout<<"sum of all digits"<<sum<<endl;
}