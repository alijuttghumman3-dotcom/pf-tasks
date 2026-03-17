#include<iostream>
using namespace std;
int main() {
    int rows, cols;
 

    for (int rows = 1; rows <= 10; rows++) {
        for (int cols = 1; cols <= rows; cols++) {
            cout << "* ";
        }
        cout << endl; 
    }

    cout << endl;
    cout << "Another pattern: " << endl;

     for (int rows = 10; rows >=1 ; rows--) {
        for (int cols = 1; cols <= rows; cols++) {
            cout << "* ";
        }
        cout << endl; 
    }

    cout << endl;
    cout << "Another pattern: " << endl;
   
        for (int rows = 1; rows <= 10; rows++) {
             for( int spaces=1; spaces< rows; spaces++){
            cout << "  "; 
        }
        for (int cols = 10; cols >rows; cols--) {
            cout << "* ";
        }
        cout << endl;
    }
    cout<<endl;
    cout<<"Another pattern: "<<endl;

        for (int rows = 10; rows >=1 ; rows--) {
                for( int spaces=1; spaces< rows; spaces++){
                cout << "  "; 
            }
            for (int cols = 10; cols >rows; cols--) {
                cout << "* ";
            }
            cout << endl;
        }

    return 0;
}