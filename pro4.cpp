#include<iostream>
using namespace std;
main(){
 float red_roses= 2.00;
 float white_roses=4.10;
 float tulips=2.50;
 float original_price;
 float discounted_price;
 cout<<"RED roses";
 cin>>red_roses;
 cout<<"WHITE roses";
 cin>>white_roses;
 cout<<"TULIPS";
 cin>>tulips;
 original_price=(red_roses*2.00)+(white_roses*4.10)+(tulips*2.50);
 cout<<"Original price is :"<<original_price;
 if(original_price>200){
    discounted_price=original_price-(original_price*0.2);
  cout<<"Price after discount is :"<<discounted_price;
 }
 else{
    cout<<"original price";
 }
 
}