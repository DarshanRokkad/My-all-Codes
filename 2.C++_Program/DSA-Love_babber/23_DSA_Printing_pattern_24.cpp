// Printing pattern 24
//     1
//   2 2
// 3 3 3
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
        while(spa<=n-row)
        {
            cout<<"  ";
            spa++;
        }
        int star = 1 ;
        while(star<=row)
        {
            cout<<row<<" ";
            star++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}