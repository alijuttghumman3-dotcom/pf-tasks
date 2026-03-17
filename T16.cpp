#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i = 1;
    while(i <= 5){
        sum = sum + i;
        i++;
    }
    cout<<"The sum of numbers from 1 to 5 is: "<<sum<<endl;
    return 0;
}