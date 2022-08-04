// short circuit of the operators 
#include<iostream>
using namespace std;
int main()
{
    int a = 5 , b = 8  , i = 5;
    // Short circuit 
    if(a>b&&++i<8)
    {}
    cout<<i<<endl;

    a=10;
    if(a>b&&++i<8)
    
    cout<<i<<endl;

    return 0 ;
}