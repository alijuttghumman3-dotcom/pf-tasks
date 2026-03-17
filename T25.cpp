#include<iostream>
using namespace std;
int main(){
int time , money;
int age=18;
cout<<"Enter Money : ";
cin>>money;
cout<<"Enter Year : ";
cin>>time;
int evenY=0, oddY=0;
if((money>=1 && money<=100000)&&(time>=1800 && time <=1900)){
    for(int i=1800 ; i<=time ; i++){
        age=age-(i-1800);
        if(i%2==0){
evenY=evenY+12000;

        }
        else{
             
            oddY=oddY+12000+50*age;
           

        }   
    }    

}
int spend;
spend=evenY+oddY;
if(money>=spend){
     cout << "Yes! He will live a carefree life and will have "<< money - spend << " dollars left.";
}
else{
    cout << "He will need " << spend - money << " dollars to survive.";
}

}