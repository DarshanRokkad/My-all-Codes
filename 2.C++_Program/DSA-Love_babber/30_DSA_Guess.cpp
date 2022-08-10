// guess by babber in 5
#include<iostream> 
using namespace std; 
int main() 
{ 
    int  a = 1, b = 2; 
    if (a-- > 0 && ++b > 2 ) // same question check with or 
    {
        cout<<"Inside if "<<endl;
    }
    else 
    {
        cout<<"Inside else "<<endl;
    }
    cout<<a<<" "<<b<<endl;

    // other question
    int num = 3 ;
    cout<<(25*(++num));
  
    return 0 ;
}