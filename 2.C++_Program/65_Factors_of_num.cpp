// to find the factors of the number means the numbers from which a number is divisible 
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the number you need the factors : ";
    cin>>num;
    cout<<"The factors of "<<num<<" is ";
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }

    return 0 ;
}