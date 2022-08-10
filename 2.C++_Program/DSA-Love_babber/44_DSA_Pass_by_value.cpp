// Pass by value 
#include<iostream> 
using namespace std; 
void dummy(int n)
{
    n++;
    cout<<"In funtion : "<<n<<endl;
}
int main() 
{ 
    int n ;
    cin>>n;
    dummy(n);
    cout<<"In main funtion after fun call: "<<n<<endl;

    return 0 ;
}