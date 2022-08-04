// to find the distance between the two coordinate 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() 
{ 
    int x1,x2,y1,y2;
    cout<<"Enter the coordinate of a point : ";
    cin>>x1>>y1;
    cout<<"Enter the coordinate of another point : ";
    cin>>x2>>y2;
    float dis = (float)sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"The distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<dis<<endl;
  
    return 0 ;
}