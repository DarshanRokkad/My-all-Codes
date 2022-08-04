// Printing pattern 27
//       1
//     1 2 1
//   1 2 3 2 1 
// 1 2 3 4 3 2 1
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int spa =1 ;
        while(spa<=n-row)
        {
            cout<<"  ";
            spa++;
        }
        int tr1 = 1 ;
        while(tr1<=row)
        {
            cout<<tr1<<" ";
            tr1++;
        }
        int tr2 = 1 , start = row -1 ;
        while(tr2<=row-1)
        {
            cout<<start<<" ";
            start--;
            tr2++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}