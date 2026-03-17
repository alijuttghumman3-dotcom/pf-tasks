#include<iostream>
using namespace std;
int main(){
    int i, j, rows;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
    }   
    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}