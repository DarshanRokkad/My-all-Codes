// To find the volume of the cylinder 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int radius , height ;
    cout<<"Enter the radius and height : ";
    cin>>radius>>height;
    float vol= (float)3.14*radius*radius*height;
    cout<<"Volume of the cylinder of radius "<<radius<<" and "<<height<<" is "<<vol<<endl;
  
    return 0 ;
}