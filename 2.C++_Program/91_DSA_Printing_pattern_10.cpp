// Printing pattern 10
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1 ;
    while(row<=n)
    {
        int col = 1 , start = row ;
        while(col<=row)
        {
            cout<<start<<" ";
            start --;
            col ++ ;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}