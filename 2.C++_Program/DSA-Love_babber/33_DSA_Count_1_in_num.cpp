// count number of 1 in the number 
// we do right shift and check number of one 
#include<iostream> 
using namespace std; 
int main() 
{ 
    unsigned int n ;
    cin>>n;
    int count =0 ;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
  
    return 0 ;
}