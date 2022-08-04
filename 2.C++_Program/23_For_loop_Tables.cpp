// Using for loop in c++ and printing the tables 
#include<iostream>
using namespace std;
int main()
{
    int i , num;
    cout<<"Enter a number you need Tables : ";
    cin>>num;
    for(i=1;i<11;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    return 0 ;
}