//Sum of the two matrix 
#include<stdio.h>
int main()
{
    int i , j , row , col;
    printf("Enter the value of row : ");
    scanf("%d",&row);
    printf("Enter the value of column : ");
    scanf("%d",&col);

    int a[row][col],b[row][col],sum[row][col];
    //taking a matrix A
    printf("Enter the value of matrix A : \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //taking a matrix B
    printf("Enter the value of matrix B : \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //printing the sum of two matrix
    printf("The sum of the matrix A and B : \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j] =  a[i][j] + b[i][j];
            printf("%d ",sum[i][j]);
        }printf("\n");
    }

    return 0;
}