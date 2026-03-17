#include<iostream>
using namespace std;
main(){
int age , toyprice , machine;
int savedprice=0 , toyscount=0;
cout<<"Enter Lily Age : ";
cin>>age;
cout<<"Enter price of Washing Machine : ";
cin>>machine;
cout<<"Enter Price of 1 Toy : ";
cin>>toyprice;
if( (age>=1 && age<=77) && (toyprice>=0 && toyprice<=40)&&(machine>=1 && machine <=10000) ){
    for(int i=1 ; i<=age ; i++){
        if(i%2==0){
         int balance;
         balance=(i /2 )*10;
         balance=balance-1;
         savedprice=savedprice+balance;
        }
        else{
            toyscount++;
        }
        
    }
    int moneyFromToys = toyprice * toyscount;
    int total = savedprice + moneyFromToys;
    if(total>=machine){
        cout << "Yes! " << (total - machine) << endl;
    }
    else{
        cout << "No! " << (machine - total) << endl;
    }
}


}