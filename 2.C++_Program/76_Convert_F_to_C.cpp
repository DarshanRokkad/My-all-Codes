// table of degree faraniet to degree celcius 
// formula c = 5/9*f-32;
#include<iostream> 
using namespace std; 
int main() 
{ 
    int fah , i = 0;
    float cel=0; 
    cout<<"Enter number of values you need : ";
    cin>>fah;
    while(i<=fah)
    {
        cel = (float)((i-32)*5.0/9);
        cout<<i<<" -> "<<cel<<endl;
        i++;
    }
  
    return 0 ;
}