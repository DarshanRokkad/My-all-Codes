// Addition of row matrix taking row matrix from user 
#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    // Taking input numuber of row and column
    cout<<"Enter number of row and column: ";
    cin>>row>>col;
    int a[row][col],b[row][col],s[row][col];
    int i ,j ;
    // input of Matrix A 
    cout<<"Enter the elements of matrix A:  \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    // input of matrix B
    cout<<"Enter the elements of matrix B:  \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    // printing sum matrix 
    cout<<"The sum of matrix A and matirix B :  \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            cout<<s[i][j]<<" ";
        }cout<<endl;
    }

    return 0 ;
}