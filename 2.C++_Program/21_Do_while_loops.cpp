// Do While loop
#include<iostream>
using namespace std;
int main()
{
    int i = 6 ;
    do
    {
        cout<<i<<endl;
        i++; // if not specified loop will run infinitelty 
    }while(i<5); // even though the condition is false loop is going to excute  

    return 0;
}