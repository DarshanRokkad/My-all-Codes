// Printing pattern 09
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1; 
    while(row<=n)
    {
        int col = 1 , start = row;
        while(col<=row)
        {
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}