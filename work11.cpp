#include<iostream>
using namespace std;
int main()
{
    string inputstring;
    cout<<"Enter a string ";
    getline(cin,inputstring);
    for(int i=0; i< inputstring.length() ; i++)
    {
        char currentchar= inputstring[i];
        if(currentchar!='a'&& currentchar!='A'&& currentchar!='e'&& currentchar!='E' && currentchar!='i' &&currentchar!='I'
            &&currentchar!='o'&&currentchar!='O'&&currentchar!='u'&&currentchar!='U') 
        {
            cout<< currentchar;
        }
        
    }

}