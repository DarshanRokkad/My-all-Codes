// Printing pattern 23
// 1 1 1
//   2 2
//     3
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
            cout<<"  ";
            spa++;
        }
        int star = 1 ;
        while(star<=n-row+1)
        {
            cout<<row<<" ";
            star++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}