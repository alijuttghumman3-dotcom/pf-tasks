#include<iostream>
using namespace std;
int main()
{
    int size;
    int numbers[100];
    cout<<"Enter the size of an array ";
    cin >> size;
    cout<<"Enter "<<size<<" elements of array , one by one "<<endl;
    for(int i=0; i<size ; i++)
    {
        cin >> numbers[i];
    }
    bool special=true;
    for(int i=0; i<size ; i=i+2)
    {
        if(numbers[i]%2!=0)
        {
        special=false;
        }
        }
    if(special)
    {
        cout<<"special array ";
    }
    else{
        cout<<"the array is not special ";
    }
    
}