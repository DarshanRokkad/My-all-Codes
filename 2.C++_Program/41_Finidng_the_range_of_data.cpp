#include<iostream>
using namespace std ;
int main()
{
    char x ;
    // unsigned char x;  there will be no min value if used UMIN then error so only max
    cout<<"Size of char data type is "<<sizeof(x)<<endl;
    cout<<"and Range : "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;

    return 0;
}