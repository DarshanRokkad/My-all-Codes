// Printing pattern 18
// C
// B C 
// A B C 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n ;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        char ch = 'A'+n-row;
        while(col<=row)
        {
            
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}