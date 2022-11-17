// Return by reference
#include<iostream> 
using namespace std; 
int &fun(int &x)
{
    return x;
}
int main() 
{ 
    int a = 10 ;
    fun(a)=25; // Here fun(a) in this program nothing but a 
    cout<<a<<endl;
  
    return 0 ;
}