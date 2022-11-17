// Template function
#include<iostream>
using namespace std;\
//write a Max() function template for 2 numbers
template<class T>
T Max(T c , T d )
{
    if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}