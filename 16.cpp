#include<iostream>
using namespace std;
main(){
int weigth_of_bag;
cout<<"Enter weigth of bag"<<endl;
cin>>weigth_of_bag;
int cost_of_bag;
cout<<"Enter cost of bag "<<endl;
cin>>cost_of_bag;
int area_in_square_feet_that_bag_can_cover;
cout<<"Area in square feet that bag can cover"<<endl;
cin>>area_in_square_feet_that_bag_can_cover;
int cost_of_fertilizer_per_pound;
cost_of_fertilizer_per_pound=cost_of_bag/weigth_of_bag;
cout<<"Cost of fertilizer per pound"<<cost_of_fertilizer_per_pound<<"$"<<endl;
int cost_of_fertilizing_per_square_foot;
cost_of_fertilizing_per_square_foot=weigth_of_bag/area_in_square_feet_that_bag_can_cover;
cout<<"Cost of fertilizing per square foot "<<cost_of_fertilizing_per_square_foot<<endl;
}