// Printing pattern 16
// A
// B C 
// C D E
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n ;
    int row = 1 ;
    while(row<=n)
    {
        int col = 1 , start = row - 1  ;
        while(col<=row)
        {
            char ch = 'A'+start;
            cout<<ch<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}