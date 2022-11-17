// using of auto variable
#include<iostream> 
using namespace std; 
template<class t>
t fun(t x , t y)
{
    return x+y;
}
int main() 
{ 
    auto x = fun(3.5,5.15);
    cout<<x<<endl;

    auto a = 5+6.5*'a';
    cout<<a<<endl;
  
    return 0 ;
}