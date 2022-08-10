// Printing pattern 28 
// Hmm banane wale hai Ye thagadi wala pattern - Dabbang pattern 
// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1 
// 1 * * * * * * 1
// give output n = 9 for seeing the pattern better  
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n ;
    cin>>n;
    int row = 1 ;
    while(row<=n)
    {
        int tr1 = 1; 
        while(tr1<=n-row+1)
        {
            cout<<tr1<<" ";
            tr1++;
        }
        int star = 1 ;
        while(star<=2*(row-1))
        {
            cout<<"* ";
            star++;
        }
        int tr2 = 1  ;
        while(tr2<=n-row+1)
        {
            cout<<n-row-tr2+2<<" ";
            tr2++;
        }
        cout<<endl;
        row++;
    }
  
    return 0 ;
}