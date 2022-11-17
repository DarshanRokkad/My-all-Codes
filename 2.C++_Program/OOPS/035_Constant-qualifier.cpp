// 
#include<iostream> 
using namespace std; 
int main() 
{ 
    // const int x = 10; => 1
    // x++; => 1
    int x = 10 ;
    // int *const ptr = &x ; // => 2 and 3
    // ++*ptr; // => 2 and 3
    // ptr = &y; //=> 3
    const int *const ptr = &x; //=> 4
    cout<<*ptr<<endl;
    int y = 78;
    cout<<*ptr<<endl;
  
    return 0 ;
}