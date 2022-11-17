// Prepossersor directive
#include<iostream> 
using namespace std;

#define pi 3.142
#define msg(x) #x // convert into a string 
#define max(x,y) (x>y?x:y)

#ifndef pi
    #define pi 4343
#endif


int main() 
{ 
    cout<<pi<<endl;
    cout<<max(4,5)<<endl;
  
    return 0 ;
}