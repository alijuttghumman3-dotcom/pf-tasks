#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a Word :";
    cin.getline(word, 100);
    for(int index=0 ; word[index]!='\0';index++){
        cout<<"The Letter "<<word[index] <<"is stored in position"<<index<<endl;
    }
}