// Namespacess used remove name conflict
#include<iostream> 
using namespace std; 
namespace first 
{
    void fun()
    {
        cout<<"First function"<<endl;
    }
};
namespace second 
{
    void fun()
    {
        cout<<"second function"<<endl;
    }
};
 
using namespace second; // => automatically to take the second namespace
int main() 
{ 
    first::fun();
    fun();
  
    return 0 ;
}