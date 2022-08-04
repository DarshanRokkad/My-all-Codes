// read and print the sum of individual row and column of the matrix 
// works on the square marix 
#include<stdio.h>
int main()
{
    int row , col ,i ,j ;
    printf("Enter the number of row : ");
    scanf("%d",&row);
    printf("Enter the number of column : ");
    scanf("%d",&col);
    int a[row][col];
    // Taking input of the 2 D array 
    printf("Enter the elements of the array : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // printing the 2D array 
    printf("The elements of the 2D array is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    int sumDiagonal =0;
    for(i=0;i<row;i++)
    {
        int sumRow=0 ,sumCol=0;
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sumDiagonal = sumDiagonal + a[i][j];
            }
            sumRow=sumRow+a[i][j];
            sumCol=sumCol+a[j][i];
        }
        printf("The sum of %d row is %d \n",i+1,sumRow);
        printf("The sum of %d column is %d \n",i+1,sumCol);
    }printf("The sum of the daigonal elements of the matrix is %d\n",sumDiagonal);

    return 0 ;
}