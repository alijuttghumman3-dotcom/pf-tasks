#include<iostream>
using namespace std;
int main(){
 int totalsize;
 int firstarraysize,secondarraysize;
 
 int firstarray[2];
 int secondarray[100];
 
 cout<<"Enter the number of elements of first array( must be two ):";
 cin>>firstarraysize;
 cout<<"Enter Two Elements of first Array One per Line :"<<endl;
 for(int i=0 ; i<2 ; i++){
cin>>firstarray[i] ;

 }
 cout<<"Enter the Number of elements of second array :";
 cin>>secondarraysize;
 totalsize=secondarraysize+2;
 cout<<"Enter"<<secondarraysize <<" Elements of Second Array One per Line :"<<endl;
 for(int i=0 ; i<secondarraysize ; i++){
    cin>>secondarray[i] ;
 }
int resultarray[totalsize];
resultarray[0]=firstarray[0];
for(int position=0 ; position<secondarraysize; position++){
 resultarray[position+1]=secondarray[position];    
    
}
resultarray[totalsize-1]=firstarray[1];
cout<<"Resulting Array is [";
for(int i=0 ; i< totalsize ; i++){
    cout<< resultarray[i];
    if(i< totalsize-1){
        cout<<",";
    }
}
cout<<"]";
}