#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter The Number of elements : ";
    cin>>count;
    int numbers[100];
    cout<<"Enter "<<count<< " Numbers one per line:"<<endl;
    for(int i =0 ; i<count ; i++){
        cin>>numbers[i];
    }
    cout<<"Reverse array is : ";
    for(int reverseindex = count-1 ; reverseindex>=0 ; reverseindex--){
        cout<<numbers[reverseindex];
    }

}