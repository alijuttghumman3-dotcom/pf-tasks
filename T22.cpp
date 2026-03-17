
#include<iostream>
using namespace std;
int main(){
    cout<<"--------Library System----------"<<endl;
    string name;
    int c;
    for(int i =1 ;i<=5;i++){
        cout<<"\n1. Add Book\n";
        cout<<"  2. View Book\n";
        cout<<"  3. Borrow Book\n";
        cout<<"  4. Issue Book\n";
        cout<<"  5. Exit\n";
        cout<<"Enter Choice : ";
        cin>>c;
         if(c==1){
            cout<<"Enter Book Name : ";
            cin>>name;
            cout<<"You Added Book "<<name<<" ";
        }        
        else if(c==2){
           cout<<"Enter the Book Name you want to View: ";
            cin>>name;
            cout<<"Book is  "<<name<<" ";
        }        
        else if(c==3){
            cout<<"Enter Book Name : ";
            cin>>name;
            cout<<"You Added Book "<<name<<" ";
        }        
        else if(c==1){
            cout<<"Enter Book Name you want to Borrow : ";
            cin>>name;
            cout<<"You Borrow Book "<<name<<" ";
        }        
        else if(c==1){
            cout<<"Enter Book Name You want to issue: ";
            cin>>name;
            cout<<"You issue book"<<name<<" ";
        }        
        else {
            cout<<"Exit library ";
            
        }        
    }
}
