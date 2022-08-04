// Find the roots of the quadratic equation 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b,c , root1=0 ,root2=0;
    cout<<"Enter the value of a , b and c : ";
    cin>>a>>b>>c;
    root1 = ((-b)+(sqrt(pow(b,2)-4*a*c)))/(2*a);
    root2 = ((-b)-(sqrt(b*b-4*a*c)))/(2*a);
    cout<<"Root are "<<root1<<" and "<<root2<<endl;

    return 0 ;
}