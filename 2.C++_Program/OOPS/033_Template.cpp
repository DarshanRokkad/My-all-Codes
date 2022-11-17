// Template fuction
#include<iostream> 
using namespace std; 
// template<class T> // we cannot take two data type as an arguements
// template<class T>
template<class T , class R >
void add(T a ,R b)
{
    cout<<a+b<<endl;
}

int main() 
{ 
    add(3.1,7);
  
    return 0 ;
}