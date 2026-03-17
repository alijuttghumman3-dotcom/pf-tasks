#include<iostream>
using namespace std;
int main() {
    int n1=0, n2=1, next;
    int n;
    cout<<"How many Fibonacci numbers do you want to print? ";
    cin>>n;
     cout<<n1<<",";
        cout<<n2<<",";

    for(int i=0; i<n-1; i++){
        
        next = n1 + n2;
        cout<<next<<",";
        n1 = n2;
        n2 = next;
    }

    return 0;
}
    