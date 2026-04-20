#include<iostream>
using namespace std;
int myfunction(int number);
int main(){
    int number, result;
cout<<"Enter number";
cin>>number;
result = myfunction(number);
return 0;
}
int myfunction(int number)
{
int Total;
Total = number * 5;
return Total;
}