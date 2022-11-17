// Exception handling 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int a = 9 , b = 5 ;
    try 
    {
        if(b==0) // error condition 
        {
            throw 101;
        }
        cout<<a/b<<endl;
    }
    catch(int e)
    {
        cout<<"Error "<<e<<endl;
        cout<<e<<" => Division by zero "<<endl;
    }
    cout<<"End of program"<<endl;
  
    return 0 ;
}