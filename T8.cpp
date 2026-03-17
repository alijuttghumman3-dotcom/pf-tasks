#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = n; i>0; i /= 10){
        count++;
    }
    cout << "Number of digits in " << n << " is: " << count << endl;
    return 0;

}