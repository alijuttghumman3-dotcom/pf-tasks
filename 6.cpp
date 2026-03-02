#include<iostream>
using namespace std;
main(){
double megabytes;
cout<<"Enter the size in megabytes"<<endl;
cin>>megabytes;
double bits=megabytes*1024*1024*8;
cout<<megabytes<<"is equivalent to"<<bits<<endl;
}