#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    cout<<"Enter digit to check frequency: ";
    int digit;
    cin>>digit;
    int frequencey = 0;
    for(int i=num; i>0; i /= 10){
        int lastDigit = i % 10;
        if(lastDigit == digit){
            frequencey++;
        }
    }
    cout<<"Frequency of "<<digit<<" in "<<num<<" is: "<<frequencey<<endl;
    return 0;
}