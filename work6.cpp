#include<iostream>
using namespace std;
main(){
    cout<<"No of Elements : ";
    int totalnumbers;
    cin>>totalnumbers;
    int values[100];
    int maxvalues[1]={'0'};
    
    for(int i=0 ; i<totalnumbers ;i++){
        cout<<"Enter Number "<<i+1<<"per line :";
        cin>>values[i];
         if(values[i]>maxvalues[1]){
            maxvalues[1]=values[i];
         }
    }
    cout<<"The Largest is :" <<maxvalues[1];
}