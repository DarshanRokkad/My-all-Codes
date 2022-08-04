// Printing pattern 14
// A B C 
// B C D 
// C D E
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1 ;
    while(row<=n)
    {
        int col =1 , start = row-1;
        while(col<=n)
        {
            char ch = 'A'+start;
            cout<<ch<<" ";
            col ++;
            start++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}