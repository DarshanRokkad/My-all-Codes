// Lambda expression 
#include<iostream> 
using namespace std; 
int main() 
{ 
    [](){cout<<"Hello world!"<<endl;}();

    [](int x ,int y){cout<<x+y<<endl;}(4,7);

    cout<<([](int x ,int y){return x+y;}(31,8))<<endl;

    int a = 9 , b = 3 ;
    [a,b](){cout<<a<<" "<<b<<endl;}();

    auto f = [a](){cout<<a<<endl;};
    cout<<a<<endl;
  
    return 0 ;
}