// Displaly the grade of the student according to the average it is nothing but a percentage
#include<iostream> 
using namespace std; 
int main() 
{ 
    int m1 ,m2 ,m3 ,total ;
    cout<<"Enter your number : ";
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    float avg = total /3;
    if(avg>60)
    {
        cout<<'A'<<endl;
    }
    else if(avg<60&&avg>=35)
    {
        cout<<'B'<<endl;
    }
    else 
    {
        cout<<'C'<<endl;
    }
  
    return 0 ;
}