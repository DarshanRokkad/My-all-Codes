// Matrix multiplication 
// very important problem 
#include<iostream>
using namespace std;
int main()
{
    int row1 , col1,row2 , col2 ; 
    int i , j , k , sum = 0 ;
    // Taking number of row and column of 2 matrix 
    cout<<"Enter number of row and column of matrix A : ";
    cin>>row1>>col1;
    cout<<"Enter number of row and column of matrix B : ";
    cin>>row2>>col2;
    int a[row1][col1],b[row2][col2];
    if(col1==row2)
    {
        int m[row1][col2];
        // Input of matrix A
        cout<<"Enter the elements of the Matrix A : \n";
        for(i=0 ;i<row1 ;i++)
        {
            for(j=0 ;j<col1;j++)
            {
                cin>>a[i][j];
            }
        }
        // Input of matrix B
        cout<<"Enter the elements of the Matrix B : \n";
        for(i=0 ;i<row2;i++)
        {
            for(j=0 ;j<col2;j++)
            {
                cin>>b[i][j];
            }
        }
        // logic for matrix multiplication 
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                sum =0;
                for(k=0;k<row2;k++) // can use col1 also here
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                m[i][j]=sum ;
            }
        }
        // Printing the multiplied matrix
        cout<<"Mutliplication of matrix A and matrix B : \n";
        for(i=0 ;i<row1 ;i++)
        {
            for(j=0 ;j<col2;j++)
            {
                cout<<m[i][j]<<" ";
            }cout<<endl;
        }
    }
    else 
    cout << "Matrix multiplication is not possible!..."<<endl;

    return 0 ;
}