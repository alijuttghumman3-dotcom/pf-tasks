#include<iostream>
using namespace std;
main(){
int square_meters;
cout<<"no of square meters you can paint"<<endl;
cin>>square_meters;
int width;
cout<<"width of single wall"<<endl;
cin>>width;
int height;
cout<<"height of single wall"<<endl;
cin>>height;
int walls;
walls=square_meters/(width*height);
cout<<"no of walls that you can paint"<<walls<<endl;
}
