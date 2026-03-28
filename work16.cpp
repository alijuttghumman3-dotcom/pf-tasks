#include<iostream>
using namespace std;
main(){
    int sum=0;
 float average=0;
 int numbers[5]={1,2,3,4,5};
 for(int idx=0;idx<5;idx=idx+1)
 {
    sum=sum+numbers[idx];
 }
 average=sum/5;
 cout<<"Sum"<<sum<<endl;
 cout<<"Avg"<<average<<endl;

}