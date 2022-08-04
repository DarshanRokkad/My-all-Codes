// Printing pattern 22
// ***
//  ** 
//   *
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1 ;
    while(row<=n)
    {
        int spa = 1 ;
        while(spa<=row-1)
        {
            cout<<" ";
            spa++;
        }
        int star = 1 ;
        while(star<=n-row+1)
        {
            cout<<"*";
            star++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}