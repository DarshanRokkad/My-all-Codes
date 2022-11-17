#include<iostream>
using namespace std;

//1 write a min() function here to min of 2 integers
int min(int a , int b)
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
//2 write a min() function here to min of 3 integers
int min(int a , int b ,int c )
{
    if (a<=b &&a<=c)
    {
        return c;
    }
    else if(b<=a&&b<=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
//3 write a min() function here to min of 2 floats
float min(float a , float b)
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<min(10,5)<<endl;
    cout<<min(12,7,9)<<endl;
    cout<<min(18.0f,9.0f)<<endl;

    return 0 ;
}
