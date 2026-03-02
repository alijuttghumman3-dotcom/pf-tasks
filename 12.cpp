#include<iostream>
using namespace std;
int main(){
int minutes;
cout<<"No of minutes:"<<endl;
cin>>minutes;
int frames_per_seconds;
cout<<"Frames per seconds:"<<endl;
cin>>frames_per_seconds;
int total_frames;
total_frames=minutes*60*frames_per_seconds;
cout<<"Total no of frames "<<total_frames<<endl;
return 0;
}

