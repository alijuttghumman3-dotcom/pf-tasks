#include<iostream>
#include<cmath>
using namespace std;
main(){
    int a, b, c, d;
    float root1, root2;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    cout<<"Enter the value of c";
    cin>>c;
    d=b*b - 4*a*c;
    if(d==0){
    root1=-b/2*a;
    root2=root1;
    cout<<"Roots are:"<<root1<<"and"<<root2;
    }
    if(d>0){
        root1=(-b+sqrt((b*b)-4*a*c))/2*a;
        root2=(-b-sqrt((b*b)-4*a*c))/2*a;
        cout<<"roots are"<<root1<<"and"<<root2;
    }
    if(d<0){
          root1=-b/2*a+(sqrt(-(b*b)-4*a*c))/2*a;
        root2=-b/2*a-(sqrt(-(b*b)-4*a*c))/2*a;
        cout<<"roots are"<<root1<<"and"<<root2;
        cout<<"roots are"<<root1<<"i"<<"and"<<root2<<"i";
    }
}