#include<iostream>
#include<string>
using namespace std;
int main()
{
    int  chord;
    string a[100];
    cout<<"Enter the number of the chord ";
    cin >> chord;
    cout<<"Enter "<<chord<<" chord , one per line "<<endl;
    for(int i=0; i<chord ; i++)
    {
        cin >> a[i];
    }
    string ch;
    cout<<"jazzifiy = [ ";
    for(int i=0;i<chord;i++)
    {
        if( a[i].back()!='7')
        {
            ch =a[i]+"7";
            cout<<ch<<" , ";
        }
       else 
       {
        cout<<a[i]<<" , ";
       }


    }
    cout<<"\b\b ] ";
  
}