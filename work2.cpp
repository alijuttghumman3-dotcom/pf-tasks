#include<iostream>
using namespace std;
main(){
    char text[50] ;
    cout<<"Enter A string :";
    cin>>text;
    int size=0;
    while(text[size]!='\0'){
        size++;
    }
    cout<<"Reverse String is : ";
    for(int i= size-1 ; i>=0 ; i--){
        cout <<text[i];
    }
}