// Matrix addition
#include<iostream>
using namespace std;
int main()
{
    int row , col;
    cout<<"Enter number of row of the matrix : ";
    cin>>row ;
    cout<<"Enter number of column of the matrix : ";
    cin>>col;
    int a[row][col],b[row][col],c[row][col];
    cout<<"Enter the elements of the martix A : \n";
    for(int i =0  ;i<row ;i++)
    {
        for(int j =0 ;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the matrix B : \n";
    for(int i =0  ;i<row ;i++)
    {
        for(int j =0 ;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"The elements of the sum matrix a and b : \n";
    for(int i =0  ;i<row ;i++)
    {
        for(int j =0 ;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j]; // Put - for the subtraction of the matrix 
            cout<<c[i][j]<<" ";
        }cout<<endl;
    } 

    return 0;
}