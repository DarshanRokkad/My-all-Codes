// Printing pattern 24
//     1
//   2 3
// 4 5 6 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1 , count = 1 ;
    while(row<=n)
    {
        int spa = 1 ;
        while(spa<=n-row)
        {
            cout<<"  ";
            spa++;
        }
        int star = 1 ;
        while(star<=row)
        {
            cout<<count<<" ";
            count++;
            star++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}