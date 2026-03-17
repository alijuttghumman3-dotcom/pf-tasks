#include<iostream>
using namespace std;
int main(){
    cout<<"----------Simple Calculator----------\n";
    int choice , n1 ,n2 , ans;
    for(int i=1 ; i<=5 ; i++){
        cout<<"\n 1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Exit\n";
     cout<<"Please Enter Your Choice : ";
    cin>>choice;
    cout<<"Please Enter First Number : ";
    cin>>n1;
    cout<<"please Enter Second Number : ";
    cin>>n2;
    if(choice==1){
        ans=n1+n2;
        cout<<"Result"<<ans;
    }
    else if(choice==2){
        ans=n1-n2;
        cout<<"Result"<<ans;
    }
    else if(choice==3){
        ans=n1*n2;
        cout<<"Result"<<ans;
    }
    else if(choice==4){
        ans=n1/n2;
        cout<<" Result "<<ans;
    }
    else{
        
        cout<<"Program Exit";
    }
    }
}
    