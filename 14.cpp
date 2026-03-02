#include<iostream>
using namespace std;
main(){
float imposter_count;
cout<<"Enter imposter count:"<<endl;
cin>>imposter_count;
float player_count;
cout<<"Enter player_count:"<<endl;
cin>>player_count;
float chances_of_imposter;
chances_of_imposter=100*(imposter_count/player_count);
cout<<"Chances of imposter"<<chances_of_imposter<<endl;

}


