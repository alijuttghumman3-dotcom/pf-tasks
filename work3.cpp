#include<iostream>
using namespace std;
main(){
    char letter[50] ;
    cout<<"Enter A string :";
    cin>>letter;
    char ascii;
   for(int i=0 ; letter[i]!='\0';i++){
       ascii=letter[i]+1;
       cout<<ascii;
   }
}