// Printing pattern 17
// A
// B C 
// D E F 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n ;
    int row = 1, count = 0 ;
    while(row<=n)
    {
        int col = 1   ;
        while(col<=row)
        {
            char ch = 'A'+count;
            cout<<ch<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}