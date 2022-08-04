// Matrix multiplication
#include<iostream>
using namespace std;
int main()
{
    int row1 , col1 , row2, col2;
    cout<<"Enter number of row of the matrix A : ";
    cin>>row1;
    cout<<"Enter number of column of the matrix A : ";
    cin>>col1;
    cout<<"Enter number of row of the matrix B : ";
    cin>>row2;
    cout<<"Enter number of column of the matrix B : ";
    cin>>col2;
    if(col1==row2)
    {
        int a[row1][col1],b[row2][col2],c[row1][col2];
        cout<<"Enter the elements of the martix A : \n";
        for(int i =0  ;i<row1 ;i++)
        {
            for(int j =0 ;j<col1;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements of the matrix B : \n";
        for(int i =0  ;i<row2 ;i++)
        {
            for(int j =0 ;j<col2;j++)
            {
                cin>>b[i][j];
            }
        }
        cout<<"The elements of the sum matrix a and b : \n";
        for(int i =0  ;i<row1 ;i++)
        {
            for(int j =0 ;j<col2;j++)
            {
                int sum = 0 ;
                for(int k=0;k<row2;k++)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                } 
                c[i][j]=sum;
                cout<<c[i][j]<<" ";               
            }cout<<endl;
        } 
    }
    else
    {
        cout<<"Matrix Multiplication is not possible!"<<endl;
        cout<<"Because the number row of matrix A not equal to matrix B!"<<endl;
    }

    return 0;
}