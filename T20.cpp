#include  <iostream>
using namespace std;
int main(){
    int n=1;
    while(n<10){
      
        if(n==5){
           n++;
            continue;
        }
        cout<<"n =" <<n<<endl;
      n++;
    }
        
    return 0;
}
    