// To find teh GCD of two number 
// can be calculated by the subtracting larger number by smaller until they become equal the number which are equal is the gcd of two numbers
#include<iostream> 
using namespace std; 
int main() 
{ 
    int m , n ;
    cout<<"Enter two numbers : ";
    cin>>m>>n;
    int num1 = m , num2 = n ;
    while(m!=n)
    {
        if(m>n)
        {
            m =m -n;
        }
        else 
        {
            n= n -m ;
        }
    }
    cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<m<<endl;
  
    return 0 ;
}