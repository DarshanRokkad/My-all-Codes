// Overflow the imp topic in interview 
#include<iostream>
using  namespace std;
int main()
{
    cout<<"Range : "<<CHAR_MAX<<" is max value and"<<CHAR_MIN<<" is min value of the character"<<endl;
    char x = 128;
    cout<<(int)x<<endl;
    x++;
    cout<<(int)x<<endl;

    return 0 ;
}